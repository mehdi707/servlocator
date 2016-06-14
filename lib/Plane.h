#ifndef PLANE_H
#define PLANE_H

#include<string>

using namespace std;
using std::string;

class Plane
{
public:
    Plane();
    ~Plane();
    Plane(const string&);
    Plane(const Plane&);
    Plane& operator=(const Plane&);
    void setPlaneName(const string&);
    string getPlaneName()const;

private:
    string name;
};

#endif // PLANE_H
