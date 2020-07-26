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
    cout<<endl<<"\t\t\tEnter Your Unique ID Please ";
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
        cout<<endl<<"\t\t\t****************************************************************";
        for (int i = 0; i < *cn ; ++i) {
        cout << endl << "\t\t\t" <<"Course "<<i+1<<" Name  : " <<courseslistarray[i][0];
        cout << endl << "\t\t\t" << "Course Code    : "<<courseslistarray[i][1];
        cout << endl << "\t\t\t" << "Course Teacher : "<<courseslistarray[i][2]<<endl;
        cout<<endl<<"\t\t\t****************************************************************";
}}
//###########################################################################

void teacher ::phonenumber()
{
    cout<<endl<<"\t\t\tPlease Enter Your Phone Number ";
    getline(cin,sphonenumber);
    cin.ignore();
}

//###########################################################################
void teacher ::emailaddress()
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


