#ifndef __COMMON_H__
#define __COMMON_H__
#include<iostream>
#include<string>
#include"base.h"
using namespace std;

class teacher : public parent
{
    string semailaddress;
    string sphonenumber;
    teacher();
    int generateUniqueInt();
    void courseenrolled();
    void stuphonenumber();
    void stuemailaddress();
    void changesemailaddress();
    void changesphonenumber();

    //void printiddata();
/*
a. Teacher Name
b. Teacher ID
c. Address
d. Phone Number
e. Email Address
f. Date of Birth
g. Course(s) he/she is teaching
*/

};
#endif

