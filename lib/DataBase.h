#ifndef DATABASE_H
#define DATABASE_H
#include <string>
using std::string;

class DataBase{
public:
  DataBase();
  DataBase(const DataBase&);
  DataBase& operator=(const DataBase&);
  ~DataBase();
  DataBase(const string&, const string&);
  void setDataBaseName(const string&);
  void setDataBaseVer(const string&);
  string getDataBaseName() const;
  string getDataBaseVersion() const;
private:
  string dbname;
  string dbver;
};

#endif
