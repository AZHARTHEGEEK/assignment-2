#pragma once
#ifndef Included_TEACHER_H
#define Includeed_TEACHER_H
#include<iostream>
#include<conio.h>
#include<string>
#include"course.h"
#include"person.h"
using namespace std;

class teacher :virtual public person ,virtual public course
{
private:

public:
    teacher();
    string semailaddress;
    string sphonenumber;
    int generateUniqueInt();

    void setphonenumber();
    void setemailaddress();
    void changesemailaddress();
    void changesphonenumber();
    void addcourse();
    void removecourse();
};
    //void printiddata();

#endif
