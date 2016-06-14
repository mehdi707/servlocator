#include<string>
#include<exception>
#include "IPInvalidError.h"

using std::string;
using std::invalid_argument;

IPInvalidError::IPInvalidError(const string &ms):invalid_argument(""), msg(ms){
}

IPInvalidError::~IPInvalidError() throw(){

}

const char* IPInvalidError::what() const throw(){
    return msg.c_str();
}
