#include "WebServer.h"
#include <string>
using std::string;

WebServer::WebServer(){
}

WebServer::~WebServer(){
}

WebServer::WebServer(const WebServer &src):webserver(src.webserver), version(src.version){
}

WebServer::WebServer(const string ws, const string ver):webserver(ws), version(ver){
}

WebServer &WebServer::operator=(const WebServer& rhs){
    webserver=rhs.webserver;
    version=rhs.version;
}

void WebServer::setWebServer(const string ws){
webserver=ws;
}

void WebServer::setVersion(const string ver){
version=ver;
}

string WebServer::getVersion() const{
return version;
}

string WebServer::getWebServer() const{
return webserver;
}




