#ifndef WEBSERVER_H
#define WEBSERVER_H

#include <string>
using std::string;

class WebServer{
public:
  WebServer();
  WebServer(const string, const string);
  WebServer(const WebServer&);
  WebServer& operator=(const WebServer&);
  ~WebServer();
  void setWebServer(const string);
  void setVersion(const string);
  string getWebServer() const;
  string getVersion() const;
private:
  string webserver;
  string version;
};

#endif
