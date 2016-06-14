#ifndef IP_H
#define IP_H

#include <string>
#include<regex>
#include "Location.h"

using namespace std;
using std::string;
using std::regex;

class IP
{
public:
    IP();
    IP(string);
    IP(string, const Location&);
    IP(const IP&);
    IP& operator=(const IP&);
    ~IP();
    void setIP(string ip);
    string getIP()const;
    void setIPLocation(const Location&);
    Location& getIPLocation() const;
    bool isCorrect(string ip);
private:
    string ip;
    Location *ip_location;
};

#endif // IP_H
