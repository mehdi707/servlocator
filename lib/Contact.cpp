#include <string>
#include <vector>
#include "Contact.h"

using std::string;
using std::vector;

Contact::Contact(){
}

Contact::~Contact(){
}

Contact::Contact(const Contact &src):contact_name(src.contact_name), tel(src.tel), mobile(src.mobile),email(src.email), info(src.info){
}

Contact& Contact::operator= (const Contact &rhs){
    contact_name=rhs.contact_name;
    tel=rhs.tel;
    mobile=rhs.mobile;
    email=rhs.email;
    info=rhs.info;

    return *this;
}

void Contact::setContactName(string cname){
    contact_name=cname;
}

void Contact::setTel(const vector<string> &t){
    tel=t;
}

void Contact::setMobile(const vector<string> &m){
    mobile=m;
}

void Contact::setEmail(const vector<string> &e){
email=e;
}

void Contact::setInfo(string i){
    info=i;
}

void Contact::addNewTel(string t){
    tel.push_back(t);
}

void Contact::addNewMobile(string m){
    mobile.push_back(m);
}

void Contact::addNewEmail(string e){
    email.push_back(e);
}

string Contact::getContactName() const{
    return contact_name;
}

vector<string> Contact::getTel() const{
    return tel;
}

vector<string> Contact::getEmail() const{
    return email;
}

vector<string> Contact::getMobile() const{
    return mobile;
}

