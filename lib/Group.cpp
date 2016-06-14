#include <string>
#include <iostream>
#include <iomanip>
#include "Group.h"

using namespace std;
using std::string;

Group::Group():name("Untitled..."){

}

Group::Group(const Group &src):name(src.name){
}

Group& Group::operator =(const Group& rhs){
    name=rhs.name;
    return *this;
}

Group::Group(const string& g):name(g){
}

Group::~Group(){

}

void Group::setGroupName(const string& g){
    name=g;
}

string Group::getGroupName() const{
    return name;
}


