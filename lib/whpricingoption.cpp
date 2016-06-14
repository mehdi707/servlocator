#include "whpricingoption.h"

WHPricingOption::WHPricingOption(){

}

WHPricingOption::WHPricingOption(const WHPricingOption &src):monthly_price(src.monthly_price){

}

WHPricingOption::WHPricingOption(const double& p):monthly_price(p){
}

WHPricingOption::~WHPricingOption(){
}

WHPricingOption &WHPricingOption::operator=(const WHPricingOption& rhs){
    monthly_price=rhs.monthly_price;
}

void WHPricingOption::setPrice(const double& p){
    monthly_price=p;
}

double WHPricingOption::getMonthlyPrice() const{
    return monthly_price;
}

double WHPricingOption::get3MonthPrice()const {
    return monthly_price*3.0;
}

double WHPricingOption::get6MotnhPrice()const {
    return monthly_price*6.0;
}

double WHPricingOption::get1YearPrice()const{
    return monthly_price*12;
}
