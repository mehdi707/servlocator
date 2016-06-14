#include "Location.h"
#include <string>
using std::string;

Location::Location(){
    location="";
}

Location::~Location(){

}

Location &Location::operator=(const Location& rhs){
location=rhs.location;
return *this;
}

Location::Location(const Location &src):location(src.location){
}

Location::Location(const string& l):location(l){
}

void Location::setLocation(const string& l)
{
location=l;
}

string Location::getLocation() const{
  return location;
}
