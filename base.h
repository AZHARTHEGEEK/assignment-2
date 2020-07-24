#pragma once
#ifndef __COMMON_H__
#define __COMMON_H__

#include<conio.h>
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
    //Change Address
    string changeaddress();

    string id;
    //int i=0;


    //printdata()

    string printdata();

};
  #endif
