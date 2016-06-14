#include <iostream>
#include <stdexcept>

#include "WHPlane.h"
#include "WHTechnicalOption.h"
#include "WHMainOption.h"
#include "OS.h"
#include "DataBase.h"
#include "WHGroup.h"
#include "Group.h"
#include "IP.h"
#include "IPInvalidError.h"
#include "Server.h"
#include "Location.h"
#include "Server.h"

using namespace std;

int main(int argc, char **argv) {
    DataBase* sqlite=new DataBase("Sqlite", "2013");
    DataBase* mysql7_5=new DataBase("MySQL", "7.5");
    OS* ubuntu14_04=new OS("Ubuntu", "14.04");
    Location* iran=new Location("Iran");
    IP* ip1=new IP("124.123.222.30");
    Server* ser1=new Server(*sqlite, *ubuntu14_04, *iran, *ip1);
    Server* ser2=new Server();
    Server* ser3=new Server();

    ser2->setDatabase(*mysql7_5);
    ser2->setIP(*ip1);
    ser2->setLocation(*iran);
    ser2->setOS(*ubuntu14_04);

    cout<<ser1->getDatabase().getDataBaseName()<<endl;
    cout<<ser1->getDatabase().getDataBaseVersion()<<endl;
    cout<<ser2->getIP().getIP();
    cout<<ser3->getIP().getIP();

    delete sqlite;
    delete mysql7_5;
    delete ip1;
    delete iran;
    delete ubuntu14_04;
    delete ser3;
    delete ser2;
    delete ser1;




    return 0;
}
