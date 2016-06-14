#include <string>
#include "DataBase.h"

using std::string;

DataBase::DataBase():dbname(""), dbver(""){
}

DataBase::DataBase(const DataBase &src):dbname(src.dbname),dbver(src.dbver){
}

DataBase &DataBase::operator=(const DataBase &rhs)
{
dbname=rhs.dbname;
dbver=rhs.dbver;
return *this;
}
DataBase::~DataBase(){
}

DataBase::DataBase(const string& db, const string& ver):dbname(db), dbver(ver){
}

string DataBase::getDataBaseName() const{
    return dbname;
}

string DataBase::getDataBaseVersion() const{
    return dbver;
}

void DataBase::setDataBaseName(const string &db){
    dbname=db;
}

void DataBase::setDataBaseVer(const string &v){
    dbver=v;
}

