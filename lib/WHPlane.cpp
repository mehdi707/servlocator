#include<string>
#include"WHPlane.h"
#include "WHMainOption.h"
#include "whpricingoption.h"
#include "WHTechnicalOption.h"

using std::string;

WHPlane::WHPlane(){
}

WHPlane::WHPlane(const WHPlane &src):Plane(src), main_opt(src.main_opt),technical_opt(src.technical_opt), price_opt(src.price_opt){
}

WHPlane::WHPlane(const string &pname, const WHMainOption& mainop, const WHTechnicalOption &tech, const WHPricingOption &pricing)
    :Plane(pname), main_opt(new WHMainOption(mainop)), technical_opt(new WHTechnicalOption(tech)), price_opt(new WHPricingOption(pricing)){
}

WHPlane &WHPlane::operator=(const WHPlane &rhs){
    Plane::operator =(rhs);
    main_opt=rhs.main_opt;
    technical_opt=rhs.technical_opt;
    price_opt=rhs.price_opt;
    return *this;
}

WHPlane::~WHPlane(){
    delete price_opt;
    delete technical_opt;
    delete main_opt;


}

WHMainOption& WHPlane::getMainOption() const{
        return *main_opt;
}

void WHPlane::setMainOption(const WHMainOption& who){
    *main_opt=*(&who);

}

WHTechnicalOption& WHPlane::getTechnicalOption() const{
    return *technical_opt;
}

void WHPlane::setTechnicalOption(const WHTechnicalOption& whtco){
    *technical_opt=*(&whtco);
}

WHPricingOption& WHPlane::getPriceOption() const{
return *price_opt;
}


