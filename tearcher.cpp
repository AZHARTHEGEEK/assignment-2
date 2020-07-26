#include<iostream>
#include<conio.h>
#include<string>
#include"person.h"
#include"teacher.h"


using namespace std;

 teacher::teacher()
{
    //Constructor of teacher class
      cout<<endl;
}
//###########################################################################
/*
Teacher Name
Teacher ID
Address
Phone Number
Email Address
Date of Birth
Course(s) he/she is teaching



*/
//###########################################################################

int teacher :: generateUniqueInt()
{
    cout<<endl<<"\t\t\tEnter Your ID Please ";
    getline(cin,id);
    cin.ignore();

}

//###########################################################################
/*
void teacher :: printiddata()
{
    int a;
    cout<<endl<<"\t\t\tALL Student Id lists : "<<endl;
    for(a=0;a=!"\0";a++)
    {
        cout<<endl<<endl<<"\t\t\tID : "<<id[a]<<endl<<endl;
    }
} */

//###########################################################################

void teacher ::courseenrolled()
{
    cout<<endl<<"\t\t\tUnder working course enrolled ";
}
//###########################################################################

void teacher ::stuphonenumber()
{
    cout<<endl<<"\t\t\tPlease Enter Your Phone Number ";
    getline(cin,sphonenumber);
    cin.ignore();
}

//###########################################################################
void teacher ::stuemailaddress()
{
    cout<<endl<<"\t\t\tPlease Enter Your Email Adress ";
    getline(cin,semailaddress);
    cin.ignore();
}
//###########################################################################
void teacher :: changesemailaddress()
    {
    char name;
    cout<<endl<<"\t\t\tDo you want to change Email Address? If yes, then type 'Y' otherwise type 'N'.";
    cin>>name;
    if(name=='Y' || name == 'y')
    {
        cout<<"\t\t\tEnter Your Email New Address : ";
        getline(cin,semailaddress);
    }
    }
//###########################################################################
void teacher :: changesphonenumber()
    {
    char name;
    cout<<endl<<"\t\t\tDo you want to change Phone Number? If yes, then type 'Y' otherwise type 'N'.";
    cin>>name;
    if(name=='Y' || name == 'y')
    {
        cout<<"\t\t\tEnter Your Phone Number : ";
        getline(cin,sphonenumber);
    }
    }


