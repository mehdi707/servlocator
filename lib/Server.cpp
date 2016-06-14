#include<string>
#include "Server.h"

using namespace std;
using std::string;

Server::Server():db(new DataBase("", "")), os(new OS("","")), location(new Location("")), ip(new IP("")){
}

Server::Server(const DataBase &dbv, const OS &osv, const Location &lv, const IP &ipv):db(new DataBase(dbv)), os(new OS(osv)),
    location(new Location(lv)), ip(new IP(ipv)){

}

Server::~Server(){
    delete db;
    delete os;
    delete location;
    delete ip;
}

void Server::setDatabase(const DataBase & dbv){
       *db=dbv;
}

void Server::setIP(const IP &ipv){
    *ip=ipv;
}

void Server::setLocation(const Location &lv){
    *location=lv;
}

void Server::setOS(const OS &osv){
    *os=osv;
}

DataBase& Server::getDatabase() const
{
    return *db;
}

IP& Server::getIP() const{
    return *ip;
}

Location& Server::getLocation() const{
    return *location;
}

OS& Server::getOperatingSystem() const{
    return *os;
}

Server::Server(const Server& src):db(src.db), os(src.os), location(src.location), ip(src.ip),ismailserver(src.ismailserver),
    iswebserver(src.iswebserver), isftpserver(src.isftpserver), isdatabaseserver(src.isdatabaseserver){
}

Server& Server::operator =(const Server& rhs){
    *db=rhs.getDatabase();
    *os=rhs.getOperatingSystem();
    *location=rhs.getLocation();
    *ip=rhs.getIP();
    isdatabaseserver=rhs.isdatabaseserver;
    isftpserver=rhs.isftpserver;
    ismailserver=rhs.ismailserver;
    iswebserver=rhs.iswebserver;
return *this;
}
