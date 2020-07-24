#pragma once
#ifndef Included_TEACHER_H
#define Includeed_TEACHER_H
#include<iostream>
#include<conio.h>
#include<string>
#include"base.h"
using namespace std;

class teacher : public parent
{
private:

public:
    teacher();
    string semailaddress;
    string sphonenumber;
    int generateUniqueInt();
    void courseenrolled();
    void stuphonenumber();
    void stuemailaddress();
    void changesemailaddress();
    void changesphonenumber();
};
    //void printiddata();

#endif
