#ifndef WHGROUP
#define WHGROUP

#include<string>
#include<vector>

#include"WHPlane.h"
#include"Location.h"
#include"Group.h"

using std::string;
using std::vector;

class WHGroup:public Group{
public:
    WHGroup();
    WHGroup(const string&, const vector<WHPlane>&, const Location&);
    WHGroup(const WHGroup&);
    WHGroup& operator=(const WHGroup&);
    ~WHGroup();

    vector<WHPlane> getHostingPlane() const;
    Location getHostingLocation() const;

    void addHostingPlane(const WHPlane&);
    void removeHostingPlane(const WHPlane&);
    void setHostingPlanes(const vector<WHPlane>&);
    void setHostingLocation(const Location&);
private:
    vector<WHPlane> hosting_planes;
    Location hosting_location;
};
#endif
