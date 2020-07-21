#include<iostream>
#include<string>
#include"person.h"
using namespace std;

    void person :: changeaddress()
    {
        cout<<"Enter Your New Address : ";
        getline(cin,address);
    }
