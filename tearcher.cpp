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

//###########################################################################
void teacher ::setemailaddress()
{
    cout<<endl<<"\t\t\tPlease Enter Your Email Adress ";
    getline(cin,semailaddress);
    //cin.ignore();
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
void teacher::addcourse()
{
    courseslist();
    cout<<endl<<endl<<"\t\t\tIf You Want to Add More Courses in Above List";
    cout<<endl<<"\t\t\tEnter \"Y\" to Add \"N\" to Skip";
    char check;
    cout<<endl<<"\t\t\tEnter : ";
    cin>>check;
    if(check=='Y' || check == 'y')
    {
        coursesnumber = coursesnumber +1;
        cout<<endl<<"\t\t\tEnter Course Name : ";
        cin.ignore();
        getline(cin,courseslistarray[coursesnumber][0]);
        cout<<endl<<"\t\t\tEnter Course Code : ";
        cin.ignore();
        getline(cin,courseslistarray[coursesnumber][1]);
        cout<<endl<<"\t\t\tEnter Course Teacher Name : ";
        cin.ignore();
        getline(cin,courseslistarray[coursesnumber][2]);

        system("CLS");
        cout<<endl<<endl<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
        cout<<endl<<"\t\t\tSelected Course Added Successfully";
        cout<<endl<<"\t\t\tAfter Adding The Course Now Available Courses are";
        cout<<endl<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
        courseslist();
}
}
void teacher::removecourse()
{
    char check;
    courseslist();
    cout<<endl<<endl<<"\t\t\tIf You Want to Remove  Course in Above List";
    cout<<endl<<"\t\t\tEnter \"Y\" to Remove \"N\" to Skip";
    cout<<endl<<"\t\t\tEnter : ";
    cin>>check;
    if(check=='Y' || check == 'y')
    {
        int removecoursenumber;
        coursesnumber = coursesnumber -  1;
        cout<<endl<<"\t\t\tEnter Course Number : ";
        cin>>removecoursenumber;
        courseslistarray[removecoursenumber-1][0]= "Not Available";
        courseslistarray[removecoursenumber-1][1]= "Not Available";
        courseslistarray[removecoursenumber-1][2]= "Not Available";

        system("CLS");
        cout<<endl<<endl<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
        cout<<endl<<"/t/t/tSelected Course Removed Successfully";
        cout<<endl<<"/t/t/tAfter Removing The Course Now Available Courses are";
        cout<<endl<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
        courseslist();
}
}
