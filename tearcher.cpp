#include<iostream>
#include<conio.h>
#include<string>
#include"person.h"
#include"teacher.h"


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
{int a=true;
    while(a)
        {
        system("CLS");
        int b;
    if(b==1)
    {
        cout<<endl<<"\t\t\tWronge Selection Try Again Sir";
        cout<<endl<<"\t\t\tEnter Course Number Not Code";
    }
     cout<<endl<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
    cout<<endl<<"\t\t\t\t\t Available Course list "<<endl;
    cout<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl<<endl;
        cout<<endl<<"\t\t\t****************************************************************";
        for (int i = 0; i < *cn ; ++i) {
        cout << endl << "\t\t\t" <<"Course "<<i+1<<" Name  : " <<courseslistarray[i][0];
        cout << endl << "\t\t\t" << "Course Code    : "<<courseslistarray[i][1];
        cout<<endl<<"\t\t\t****************************************************************";}
        cout<<endl<<endl<<"\t\t\tThe Above Courses Currently Available To Teach\n\t\t\t";
        cout<<endl<<"\t\t\tSelect Course You Want To Teach & Enter Course Number";
        cout<<endl<<"\t\t\tEnter : ";
        int inputct;
        cin>>inputct;

            for (int i = 0; i < *cn ; ++i)
            {
                if(i+1==inputct)
                {
                    a=false;
                    cout<<endl<<"\t\t\tCourse Selected Successfully";
                    while(a==0)
                    {
                        break;
                    }
                }
            } b=1;
        }

        }

//###########################################################################

void teacher ::phonenumber()
{
    cout<<endl<<endl<<"\t\t\tPlease Enter Your Phone Number ";
    getline(cin,sphonenumber);
    cin.ignore();
}

//###########################################################################
void teacher ::setemailaddress()
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


