#ifndef CONTACT
#define CONTACT

#include<string>
#include<vector>

using namespace std;
using std::string;
using std::vector;

class Contact{
public:
    Contact();
    ~Contact();
    Contact(const Contact&);
    Contact& operator=(const Contact&);
    void setContactName(string);
    void setTel(const vector<string>&);
    void setMobile(const vector<string>&);
    void setEmail(const vector<string>&);
    void addNewTel(string);
    void addNewMobile(string);
    void addNewEmail(string);
    void setInfo(string);

    string getContactName() const;
    vector<string> getTel() const;
    vector<string> getMobile() const;
    vector<string> getEmail() const;
private:
    string contact_name;
    vector<string> tel;
    vector<string> mobile;
    vector<string> email;

  protected:
    Contact();
    ~Contact();
    void setContactName(const string);
    void setInfo(string);
};

#endif // CONTACT

