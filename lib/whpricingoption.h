#ifndef WHPRICINGOPTION_H
#define WHPRICINGOPTION_H

class WHPricingOption
{
public:
    WHPricingOption();
    WHPricingOption(const double&);
    WHPricingOption(const WHPricingOption&);
    WHPricingOption& operator=(const WHPricingOption &rhs);
    ~WHPricingOption();
    void setPrice(const double&);
    double getMonthlyPrice() const;
    double get3MonthPrice() const;
    double get6MotnhPrice() const;
    double get1YearPrice() const;
private:
    double monthly_price;
};

#endif // WHPRICINGOPTION_H
