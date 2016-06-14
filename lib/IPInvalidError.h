#ifndef IPINVALIDERROR
#define IPINVALIDERROR

#include<exception>
#include<stdexcept>

using namespace std;
using std::string;
using std::invalid_argument;

class IPInvalidError: public invalid_argument{
public:
    IPInvalidError(const string&);
    virtual ~IPInvalidError() throw();
    virtual const char* what() const throw();

private:
    string msg;
};

#endif // IPINVALIDERROR

