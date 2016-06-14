#ifndef PROGRAMMING_H
#define PROGRAMMING_H

#include <string>
#include <vector>
#include <map>

using std::string;
using std::vector;
using std::map;

class Programming{
public:
  Programming();
  ~Programming();
  Programming& operator=(const Programming&);
  Programming(const Programming&);
  Programming(const string&, const string&);
  void setPRName(const string&);
  void setVersion(const string&);
  string getPRName() const;
  string getVersion() const;
private:
  string prname;
  string version;
};

#endif
