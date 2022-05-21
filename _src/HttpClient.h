#pragma once

#include <string>

#include <curl/curl.h>
//#include "../_inc/curl/curl.h"


#define WEBBOT_USERAGENT "Mozilla/5.0 (Windows NT 6.3; WOW64; rv:34.0) Gecko/20100101 Firefox/34.0"

class CHttpClient
{
public:
	CHttpClient(const char* lpszAgent = "Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:57.0) Gecko/20100101 Firefox/57.0",
		const char* lpszCookieFile = "cookieFile.bin");
	virtual ~CHttpClient();

  bool SendRequest(const char* lpURL,std::string& szContent, const char* lpPostData = NULL, const char* lpHeaders = NULL,const char* lpCookies = NULL);
protected:
	CURL*		m_pCurl;
	std::string	m_szCookieFile;
	std::string	m_szUserAgent;
	unsigned int		m_dwErrorCode;
	unsigned int		m_dwStatusCode;

  static size_t _StringBuilder(char *ptr, size_t size, size_t nmemb, std::string *pszData);
};