#include <string>
#include "OS.h"

using std::string;

OS::OS():osname(""), osversion(""){
}

OS::~OS(){
}

OS::OS(const OS& src):osname(src.osname), osversion(src.osversion){
}

OS &OS::operator=(const OS &rhs){
osname=rhs.osname;
osversion=rhs.osversion;

return *this;
}

OS::OS(const string& name, const string& ver):osname(name), osversion(ver){
}

void OS::setOSName(const string& name){
    osname=name;
}

void OS::setOSVersion(const string& ver){
    osversion=ver;
}


string OS::getOSVersion() const {
    return osversion;
}

string OS::getOSName() const {
    return osname;
}
