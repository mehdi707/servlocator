#ifndef WHMAINOPTION_H
#define WHMAINOPTION_H

#include <string>

using std::string;

class WHMainOption{
public:
    WHMainOption();
    ~WHMainOption();
    WHMainOption(const WHMainOption&);
    WHMainOption& operator=(const WHMainOption&);
    WHMainOption(const string&, const string&, const string&);

    string getBandWidth() const;
    string getMonthlyTrafic() const;
    string getCapacity() const;

    void setBandWidth(const string&);
    void setMonthlyTrafic(const string&);
    void setCapactiy(const string&);

private:
    string bandwidth;
    string monthly_trafic;
    string capacity;
};

#endif
