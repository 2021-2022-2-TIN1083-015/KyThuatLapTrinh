#include <stdio.h>
#include "../../_src/Log.h"
//#include "..\..\_src\Utils.h"
#include "../../_src/HttpClient.h"
#include <string>

int main(){
  LOG_IT("***** START APP*****\n"); 
  curl_global_init(CURL_GLOBAL_DEFAULT);

  std::string szZone = "Asia/Ho_Chi_Minh";
  std::string url = "https://www.timeapi.io/api/Time/current/zone?timeZone=" + szZone;
  std::string szContent;
  CHttpClient clt;
  if (!clt.SendRequest(url.c_str(),szContent)){
    LOG_ET("[%s] SendRequest()\n",szZone.c_str());
  }
  else{
    LOG_DT("GET %s\n",url.c_str());
    LOG_W("%s\n",szContent.c_str());
  }

  url =  "http://api.weatherapi.com/v1/current.json?key=a5a8c4fcfdff432197590830220405&q=Hanoi&aqi=no";
  if (!clt.SendRequest(url.c_str(),szContent)){
    LOG_ET("[%s] SendRequest()\n",szZone.c_str());
  }
  else{
    LOG_DT("GET %s\n",url.c_str());
    LOG_W("%s\n",szContent.c_str());
  }

  curl_global_cleanup();
  LOG_D("\n***** EXIT APP*****\n");  
  return 0;
}