#ifndef SERVER
#define SERVER

#include "DataBase.h"
#include "OS.h"
#include "Location.h"
#include "IP.h"

class Server{
public:
    Server();
    Server(const DataBase&, const OS&, const Location&, const IP&);
    Server(const Server&);
    Server& operator=(const Server&);
    ~Server();

    void setDatabase(const DataBase&);
    void setOS(const OS&);
    void setLocation(const Location&);
    void setIP(const IP&);

    DataBase& getDatabase() const;
    OS& getOperatingSystem() const;
    Location& getLocation() const;
    IP& getIP() const;

    bool isMailServer()const;
    bool isWebServer() const;
    bool isFTPServer() const;
    bool isDataBaseServer() const;

private:
    DataBase* db;
    OS* os;
    Location* location;
    IP *ip;
    bool ismailserver=false;
    bool iswebserver=false;
    bool isftpserver=false;
    bool isdatabaseserver=false;
};

#endif // SERVER

