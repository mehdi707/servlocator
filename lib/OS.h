#ifndef OS_H
#define OS_H

#include <string>
using std::string;

class OS{
public:
  OS();
  OS(const OS&);
  OS& operator=(const OS&);
  ~OS();
  OS(const string&, const string&);
  void setOSName(const string&);
  void setOSVersion(const string&);
  string getOSName() const;
  string getOSVersion() const;
private:
  string osname;
  string osversion;
};

#endif
