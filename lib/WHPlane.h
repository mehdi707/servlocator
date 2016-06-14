#ifndef WHPLANE_H
#define WHPLANE_H

#include <iostream>
#include <string>
#include "WHMainOption.h"
#include "whpricingoption.h"
#include "WHTechnicalOption.h"
#include "Plane.h"

using std::string;

class WHPlane:public Plane{
public:
    WHPlane();
    ~WHPlane();
    WHPlane(const WHPlane&);
    WHPlane(const string&, const WHMainOption&, const WHTechnicalOption&, const WHPricingOption&);
    WHPlane& operator=(const WHPlane &);
    WHMainOption& getMainOption() const;
    void setMainOption(const WHMainOption&);
    WHTechnicalOption& getTechnicalOption() const;
    void setTechnicalOption(const WHTechnicalOption&);
    WHPricingOption& getPriceOption() const;
    void setPriceOption(const WHPricingOption&);

private:
    WHMainOption* main_opt;
    WHTechnicalOption* technical_opt;
    WHPricingOption* price_opt;
};
#endif
