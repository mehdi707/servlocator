#ifndef GROUP
#define GROUP

#include <string>

using std::string;

class Group{
public:
    Group();
    Group(const Group&);
    Group(const string&);
    Group& operator=(const Group&);
    ~Group();
    string getGroupName() const;
    void setGroupName(const string&);

private:
    string name;
};

#endif // GROUP

