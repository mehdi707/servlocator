#ifndef WHTECHNICALOPTION_H
#define WHTECHNICALOPTION_H

#include <string>
#include <vector>
#include "OS.h"
#include"Programming.h"
#include"DataBase.h"
#include"WHCPanel.h"
#include"WebServer.h"

using std::string;
using std::vector;

class WHTechnicalOption{
public:
    WHTechnicalOption();
    WHTechnicalOption(const WHTechnicalOption&);
    WHTechnicalOption(const vector<WebServer>&, const vector<WHCPanel>&, const vector<Programming>&, const int&, const int&, const int&, const int&);
    WHTechnicalOption& operator=(const WHTechnicalOption&);
    ~WHTechnicalOption();

    vector<WebServer> getWebServer() const;
    vector<WHCPanel> getWHCPanel() const;
    DataBase getDataBase() const;
    vector<Programming> getProgramming() const;
    OS getOS() const;
    int getSubDomain() const;
    int getParkedDomain() const;
    int getAddonDomain() const;
    int getEmailCount() const;

    void setWebServer(const vector<WebServer>&);
    void setWHCPanel(const vector<WHCPanel>&);
    void setDataBase(const DataBase&);
    void setProgramming(const vector<Programming>&);
    void setOS(const OS&);
    void setSubDomain(int c);
    void setPrakedDomain(int c);
    void setAddonDomain(int c);
    void setEmailCount(int c);
private:
    vector<WebServer> webserver;
    vector<WHCPanel> wcpanel;
    DataBase* database;
    vector<Programming> pr;
    OS *os;
    int subdomain;
    int parked_domain;
    int addondomain;
    int email;
};

#endif
