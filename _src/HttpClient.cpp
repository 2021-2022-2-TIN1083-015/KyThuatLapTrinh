#include "HttpClient.h"
#include "Log.h"
// CHttpClient
CHttpClient::CHttpClient(const char* lpszAgent, const char* lpszCookieFile){
  
  m_szUserAgent = lpszAgent;
  m_szCookieFile = lpszCookieFile;
  m_dwErrorCode = 0;
	m_dwStatusCode = 0;

	m_pCurl = curl_easy_init();
	if (m_pCurl)
	{
		// User-Agent
		curl_easy_setopt(m_pCurl, CURLOPT_USERAGENT, m_szUserAgent.c_str());
		// Auto referer
		curl_easy_setopt(m_pCurl, CURLOPT_AUTOREFERER, TRUE);
		// Cookie-file
		curl_easy_setopt(m_pCurl, CURLOPT_COOKIEFILE, m_szCookieFile.c_str());
		curl_easy_setopt(m_pCurl, CURLOPT_COOKIEJAR,m_szCookieFile.c_str());	
		// New cookie session
		curl_easy_setopt(m_pCurl, CURLOPT_COOKIESESSION, TRUE);

		// Decompress GZIP
		//curl_easy_setopt(m_pCurl, CURLOPT_ENCODING, "gzip, deflate");

		//SSL do not check
		curl_easy_setopt(m_pCurl, CURLOPT_SSL_VERIFYPEER, FALSE); 
		curl_easy_setopt(m_pCurl, CURLOPT_SSL_VERIFYHOST, FALSE);
	}  
}
CHttpClient::~CHttpClient()
{
	if (m_pCurl){
    curl_easy_cleanup(m_pCurl);
    m_pCurl = NULL;
  } 
}

bool CHttpClient::SendRequest(const char* lpURL,std::string& szContent, const char* lpPostData, const char* lpHeaders,const char* lpCookies){
  if (lpURL == NULL || lpURL[0] == 0) return false;
  //LOG_IT("SendRequest(%s)\n", lpURL);
	szContent.clear();
	struct curl_slist * plstHeaders = NULL;
	curl_easy_setopt(m_pCurl, CURLOPT_URL,lpURL);
	if (lpHeaders){
		plstHeaders = curl_slist_append(plstHeaders, lpHeaders);
		if (lpPostData) plstHeaders = curl_slist_append(plstHeaders, "Content-Type: application/x-www-form-urlencoded");
		curl_easy_setopt(m_pCurl, CURLOPT_HTTPHEADER, plstHeaders);
	}else{
		//curl_easy_setopt(m_pCurl, CURLOPT_HTTPHEADER, NULL);		 
	}

	if (lpCookies){
		curl_easy_setopt(m_pCurl, CURLOPT_COOKIE, lpCookies);
	}

	// Auto Re-direct URL
	curl_easy_setopt(m_pCurl, CURLOPT_FOLLOWLOCATION, 1);
	//curl_easy_setopt(m_pCurl, CURLOPT_MAXREDIRS, 10);

	if (lpPostData) {
		curl_easy_setopt(m_pCurl, CURLOPT_CUSTOMREQUEST, "POST");
		curl_easy_setopt(m_pCurl, CURLOPT_POST, 1);
		curl_easy_setopt(m_pCurl, CURLOPT_POSTFIELDS, lpPostData);
	}else{
		//curl_easy_setopt(m_pCurl, CURLOPT_AUTOREFERER, TRUE);
	}

	// Thiết lập buffer lưu nội dung
	curl_easy_setopt(m_pCurl, CURLOPT_WRITEFUNCTION, _StringBuilder);
	curl_easy_setopt(m_pCurl, CURLOPT_WRITEDATA, &szContent);

	//curl_easy_setopt(m_pCurl, CURLOPT_HEADERFUNCTION, fnWriteHeaderFunction);
	//LogWriteA("SendRequest() ... 1");
	CURLcode cResult = curl_easy_perform(m_pCurl);
	m_dwErrorCode = cResult;
	//LogWriteA("SendRequest() ... 2 m_dwErrorCode:%d",m_dwErrorCode);

	if (plstHeaders) {
		curl_slist_free_all(plstHeaders); /* free the header list */
		curl_easy_setopt(m_pCurl, CURLOPT_HTTPHEADER, NULL);
	}	
	
	if (cResult == CURLE_OK)
	{
		curl_easy_getinfo(m_pCurl, CURLINFO_HTTP_CODE, &m_dwStatusCode);
		// if (m_dwStatusCode == AIG_STATUS_CODE_ERROR){
		// 	Document d;
		// 	d.Parse(szContentA);
		// 	if (!d.HasParseError()){
		// 		m_iCodeApiResult = d["r"].GetInt();
		// 		m_szMsgApiResult.SetString(d["m"].GetString());
		// 	}
		// }
		return true;
	}

	//LOG_D("SendRequest() curl_error: %d", cResult);
	return false;  
}

size_t CHttpClient::_StringBuilder(char *ptr, size_t size, size_t nmemb, std::string *pszData){
  size_t realsize = size * nmemb;
	pszData->append(ptr, realsize);
	return realsize;
}