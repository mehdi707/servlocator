#include "WHCPanel.h"

#include <string>
using std::string;

WHCPanel::WHCPanel()
{
  setControlPanelName("");
  setCPVersion("");
}

WHCPanel::~WHCPanel(){

}

WHCPanel &WHCPanel::operator=(const WHCPanel &rhs){
    cpname=rhs.cpname;
    cpversion=rhs.cpversion;
    return *this;
}

WHCPanel::WHCPanel(const string& cpn, const string& v)
{
  setControlPanelName(cpn);
  setCPVersion(v);
}

void WHCPanel::setControlPanelName(const string& cpn){
  cpname=cpn;
}

void WHCPanel::setCPVersion(const string& v) {
  cpversion=v;
}

string WHCPanel::getControlPanelName() const{
  return cpname;
}

string WHCPanel::getCPVersion() const{
  return cpversion;
}
