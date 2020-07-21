#include<iostream>
#include<string.h>
using namespace std;
class parent
{
private:

public:
    string name;
    string birth;
    string address;
    parent();
    //Getter & Setter for name
    string getname();
    string setname();
    //Getter & Setter for birth
    string getbirth();
    string setbirth();
    //Getter & Setter for Address
    string getaddress();
    string setadress();
    //printdata()
    string printdata();
};
