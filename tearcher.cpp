#include<iostream>
#include<conio.h>
#include<string>
#include"person.h"
#include"teacher.h"
#include"course.h"


using namespace std;

 teacher::teacher()
{
    //Constructor of teacher class
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
    //cin.ignore();
    return 0;

}
void teacher::getid()
{
    cout<<endl<<"\t\t\tID : "<<id;
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



//###########################################################################

void teacher :: setphonenumber()
{
    cout<<endl<<"\t\t\tPlease Enter Your Phone Number ";
    getline(cin,sphonenumber);
    //cin.ignore();
}
void teacher::getphonenumber()
{
    cout<<endl<<"\t\t\tPhone Number : "<<sphonenumber;
}
//###########################################################################
void teacher ::setemailaddress()
{
    cout<<endl<<"\t\t\tPlease Enter Your Email Adress ";
    getline(cin,semailaddress);
    //cin.ignore();
}
void teacher::getemailaddress()
{
    cout<<endl<<"\t\t\tEmail Address : "<<semailaddress;
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
        getline(cin,changesemailaddress1);
        semailaddress=changesemailaddress1;
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


void teacher::printdata()
{
      getname();
    getid();
    getaddress();
   getphonenumber();
    getemailaddress();
   getbirth();
    getcourseteaching();
   getaddcourses();
    getremovecourses();
}
