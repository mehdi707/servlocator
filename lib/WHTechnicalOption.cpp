#include"WHTechnicalOption.h"


WHTechnicalOption::WHTechnicalOption(){
}

WHTechnicalOption::WHTechnicalOption(const vector<WebServer>& ws, const vector<WHCPanel>& whc, const vector<Programming>& p, const int &s, const int &pk, const int& a, const int &e)
    :webserver(ws), wcpanel(whc), database(new DataBase()), pr(p), os(new OS()), subdomain(s), parked_domain(pk), addondomain(a), email(e){
}

WHTechnicalOption::WHTechnicalOption(const WHTechnicalOption &src):webserver(src.webserver), wcpanel(src.wcpanel), database(src.database), pr(src.pr), os(src.os), subdomain(src.subdomain), parked_domain(parked_domain), addondomain(src.addondomain), email(src.email){
}

WHTechnicalOption &WHTechnicalOption::operator=(const WHTechnicalOption &rhs){
webserver=rhs.webserver;
wcpanel=rhs.wcpanel;
database->setDataBaseName(rhs.getDataBase().getDataBaseName());
database->setDataBaseVer(rhs.getDataBase().getDataBaseVersion());
pr=rhs.pr;
os->setOSName(rhs.getOS().getOSName());
os->setOSVersion(rhs.getOS().getOSVersion());
subdomain=rhs.subdomain;
parked_domain=rhs.parked_domain;
addondomain=rhs.addondomain;
email=rhs.email;
}

WHTechnicalOption::~WHTechnicalOption(){
    delete os;
    delete database;
}

vector<WebServer> WHTechnicalOption::getWebServer() const{
    return webserver;
}

vector<WHCPanel> WHTechnicalOption::getWHCPanel() const{
    return wcpanel;
}

DataBase WHTechnicalOption::getDataBase() const{
    return *database;
}

vector<Programming> WHTechnicalOption::getProgramming() const{
    return pr;
}

int WHTechnicalOption::getSubDomain() const{
    return subdomain;
}

int WHTechnicalOption::getParkedDomain() const{
    return parked_domain;
}

int WHTechnicalOption::getAddonDomain()const{
    return addondomain;
}

int WHTechnicalOption::getEmailCount() const{
    return email;
}

OS WHTechnicalOption::getOS() const{
    return *os;
}

void WHTechnicalOption::setWebServer(const vector<WebServer>& ws){
    webserver=ws;
}

void WHTechnicalOption::setWHCPanel(const vector<WHCPanel>& whcp){
    wcpanel=whcp;

}

void WHTechnicalOption::setSubDomain(int c){
    subdomain=c;
}

void WHTechnicalOption::setPrakedDomain(int c){
    parked_domain=c;
}

void WHTechnicalOption::setAddonDomain(int c){
    addondomain=c;
}

void WHTechnicalOption::setEmailCount(int c){
    email=c;
}

void WHTechnicalOption::setDataBase(const DataBase& db){
    database->setDataBaseName(db.getDataBaseName());
    database->setDataBaseVer(db.getDataBaseVersion());
}

void WHTechnicalOption::setProgramming(const vector<Programming>& p){
    pr=p;
}

void WHTechnicalOption::setOS(const OS& o){
    os->setOSName(o.getOSName());
    os->setOSName(o.getOSVersion());
}


