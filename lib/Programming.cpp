#include<vector>
#include<string>
#include"Programming.h"

using std::vector;
using std::string;

Programming::Programming()
{
    prname="";
}

Programming::~Programming(){
}

Programming::Programming(const Programming &src):prname(src.prname), version(src.version){

}

Programming::Programming(const string& prn, const string &ver):prname(prn), version(ver)
{
}

Programming &Programming::operator=(const Programming& rhs){
prname=rhs.prname;
version=rhs.version;
return *this;
}

string Programming::getPRName() const{
    return prname;
}

string Programming::getVersion() const{
    return version;
}

void Programming::setVersion(const string& ver){
    version=ver;
}

void Programming::setPRName(const string& pr)
{
    prname=pr;
}
