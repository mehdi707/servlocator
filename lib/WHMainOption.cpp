#include<string>

#include"WHMainOption.h"
#include"WHPlane.h"

using std::string;

WHMainOption::WHMainOption(){

}

WHMainOption::~WHMainOption(){
}

WHMainOption &WHMainOption::operator=(const WHMainOption& rhs){
    bandwidth=rhs.bandwidth;
    monthly_trafic=rhs.monthly_trafic;
    capacity=rhs.capacity;

    return *this;
}

WHMainOption::WHMainOption(const WHMainOption &src):bandwidth(src.bandwidth), monthly_trafic(src.monthly_trafic), capacity(src.capacity){

}

WHMainOption::WHMainOption(const string& bw, const string& mtrafic,const string& cap):bandwidth(bw), monthly_trafic(mtrafic), capacity(cap){
}

string WHMainOption::getBandWidth() const{
    return bandwidth;
}

string WHMainOption::getMonthlyTrafic() const{
    return monthly_trafic;
}

string WHMainOption::getCapacity() const{
    return capacity;
}

void WHMainOption::setBandWidth(const string& bw){
    bandwidth=bw;
}

void WHMainOption::setMonthlyTrafic(const string& mt){
     monthly_trafic=mt;
}

void WHMainOption::setCapactiy(const string& cap){
    capacity=cap;
}
