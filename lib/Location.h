#ifndef WHLOCATION_H
#define WHLOCATION_H

#include <string>
using std::string;

class Location{
public:
  Location();
  Location(const Location&);
  Location& operator=(const Location&);
  ~Location();
  Location(const string&);
  string getLocation() const;
  void setLocation(const string&);
private:
  string location;
};

#endif
