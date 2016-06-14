#ifndef WHCPANEL_H
#define WHCPANEL_H

#include <string>
using std::string;

class WHCPanel{
public:
  WHCPanel();
  ~WHCPanel();
  WHCPanel& operator=(const WHCPanel&);
  WHCPanel(const string&, const string&);
  string getControlPanelName() const;
  string getCPVersion() const;
  void setControlPanelName(const string&);
  void setCPVersion(const string&);
private:
  string cpname;
  string cpversion;
};
#endif
