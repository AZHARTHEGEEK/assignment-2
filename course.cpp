
#include<iostream>
#include<conio.h>
#include<string>

#include"course.h"
using namespace std;

course::course()
{
    //Constructor of course class
      cout<<endl;
}
void course::courseslist()
{
    cout<<endl<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
    cout<<endl<<"\t\t\t\t\t Available Course list "<<endl;
    cout<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl<<endl;
cout<<endl<<"\t\t\t****************************************************************";
for (int i = 0; i < *cn ; ++i) {
        cout << endl << "\t\t\t" <<"Course "<<i+1<<" Name  : " <<courseslistarray[i][0];
        cout << endl << "\t\t\t" << "Course Code    : "<<courseslistarray[i][1];
        cout << endl << "\t\t\t" << "Course Teacher : "<<courseslistarray[i][2]<<endl;
        cout<<endl<<"\t\t\t****************************************************************";

        // access columns of the array
        //for (int j = 0; j < 1; ++j) {
        //cout << "courseslistarray[" << i << "][" << j << "] = " << courseslistarray[i][j] << endl;
        }
}
void course::numberofstudentreg()
{
    cout<<endl<<endl<<"The Number of Students Enroll In Differnt Courses Are "<<*numstu;

}
void course ::courseenrolled()
{int a=true;
    while(a)
        {
        system("CLS");
        int b;
    if(b==1)
    {
        cout<<endl<<"\t\t\tWronge Selection Try Again ";
        cout<<endl<<"\t\t\tEnter Course Number Not Code";
    }
     courseslist();
        //cout<<endl<<endl<<"\t\t\tThe Above Courses Currently Available To Teach\n\t\t\t";
        cout<<endl<<"\t\t\tSelect Course & Enter Course Number";
        cout<<endl<<"\t\t\tEnter : ";
        int inputct;
        cin>>inputct;

            for (int i = 0; i < *cn ; ++i)
            {
                if(i+1==inputct)
                {
                    a=false;
                    cout<<endl<<"\t\t\tCourse Selected Successfully";
                    while(a==false)
                    {
                        break;
                    }
                }
            } b=1;
        }
        }
void course::changeofteacher()
{
    int a=true;
    while(a)
        {
        system("CLS");
        int b;
    if(b==1)
    {
        cout<<endl<<"\t\t\tWronge Selection Try Again ";
        cout<<endl<<"\t\t\tEnter Course Number Not Code";
    }
    char check;
    courseslist();
    cout<<endl<<endl<<"\t\t\tIf You Want to Change Course Teacher From Above List";
    cout<<endl<<"\t\t\tEnter \"Y\" to Remove \"N\" to Skip";
    cout<<endl<<"\t\t\tEnter : ";
    cin>>check;
    if(check=='Y' || check == 'y')
    {
        int changeofteachername;
        cout<<endl<<"\t\t\tEnter Course Number to Change Its Teacher : ";
        int acoursenumber;
        cin>>acoursenumber;
        for (int i = 0; i < *cn ; ++i)
            {
                if(i+1==acoursenumber)
                {
                    a=false;
                    cout<<endl<<"\t\t\tCourse Selected Successfully";
                    cout<<endl<<"\t\t\tNow Enter New Teacher Name";
                    string newteachername;
                    cin.ignore();
                    getline(cin,newteachername);
                    courseslistarray[changeofteachername-1][0]= newteachername;
                    cout<<endl<<"\t\t\tCourse Teacher Name Changed Successfully";
                    while(a==false)
                    {
                        break;
                    }
                }
            } b=1;
        }
}
}

