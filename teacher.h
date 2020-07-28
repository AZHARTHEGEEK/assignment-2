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
    teacher(string name ,string id ,string address ,string sphonenumber ,string semailaddress ,string birth,string changesemailaddress1,string changephonenumber1)
    {
        this->name=name;
        this->id=id;
        this->address=address;
        this->sphonenumber=sphonenumber;
        this->semailaddress=semailaddress;
        this->birth=birth;
        this->changesemailaddress1 =semailaddress;
        this->changephonenumber1=sphonenumber;


    }
    string changesemailaddress1,changephonenumber1;
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
