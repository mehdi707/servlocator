#include <string>
#include "Plane.h"

using std::string;

Plane::Plane():name("Untitled..."){
}

Plane::~Plane(){
}

Plane::Plane(const string & n):name(n){

}

Plane::Plane(const Plane &src):name(src.name){

}

Plane& Plane::operator =(const Plane& rhs){
name=rhs.name;
return *this;
}

void Plane::setPlaneName(const string& n){
name=n;
}

string Plane::getPlaneName() const{
return name;
}



