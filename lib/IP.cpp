#include<regex>
#include<iostream>
#include "IP.h"
#include"Location.h"

using std::string;
using std::regex;

IP::IP(){
}

IP::IP(string i):ip(i){
}

IP::IP(string i, const Location& l):ip(i), ip_location(new Location(l)){
}

IP::IP(const IP &src):ip(src.ip), ip_location(src.ip_location){
}

IP::~IP(){
    delete ip_location;
}

string IP::getIP() const
{
    return ip;
}

void IP::setIPLocation(const Location &iplv)
{

}

IP& IP::operator =(const IP& rhs){
    ip=rhs.ip;
    ip_location=rhs.ip_location;
    return *this;
}

Location& IP::getIPLocation()const{
return *ip_location;
}

bool IP::isCorrect(string i){
return 0;
}

