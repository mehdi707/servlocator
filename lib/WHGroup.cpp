#include<string>
#include<algorithm>
#include<vector>
#include"WHGroup.h"
#include"WHPlane.h"
#include"Location.h"

using std::string;
using std::find;
using std::vector;

WHGroup::WHGroup(){
}

WHGroup::WHGroup(const string &gname, const vector<WHPlane> &whp_vec, const Location &wloc):Group(gname), hosting_planes(whp_vec), hosting_location(wloc){
}

WHGroup::WHGroup(const WHGroup &src):Group(src), hosting_planes(src.hosting_planes), hosting_location(src.hosting_location){

}

WHGroup::~WHGroup(){
}


WHGroup &WHGroup::operator=(const WHGroup&rhs){
    Group::operator =(rhs);
    hosting_planes=rhs.hosting_planes;
    hosting_location=rhs.hosting_location;
    return *this;
}

//std::string WHGroup::getWHGroupName() const {
//    return whgroupname;
//}

vector<WHPlane> WHGroup::getHostingPlane() const{
    return hosting_planes;
}

Location WHGroup::getHostingLocation() const{
    return hosting_location;
}

//void WHGroup::setGroupName(const string &gname){
//    whgroupname=gname;
//}

void WHGroup::addHostingPlane(const WHPlane &whplane){
    hosting_planes.push_back(whplane);
}

void WHGroup::removeHostingPlane(const WHPlane &whplane){
}

void WHGroup::setHostingPlanes(const vector<WHPlane> &whp_vec){
    hosting_planes=whp_vec;
}

void WHGroup::setHostingLocation(const Location &whloc){
    hosting_location=whloc;
}
