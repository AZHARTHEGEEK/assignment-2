
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


    cout<<endl<<"\t\t\tThe Number of Students Enroll In First Course Are "<<nums1;
    cout<<endl<<"\t\t\tThe Number of Students Enroll In Second Course Are "<<nums2;
    cout<<endl<<"\t\t\tThe Number of Students Enroll In Third Course Are "<<nums3;
    cout<<endl<<endl<<"\t\t\tThe Number of Students Enroll In Differnt Courses Are "<<course::nums1 + course::nums2 + course::nums3;

}
void course :: courseenrolled()
{
    /*int rt;
    swito=rt;
    string cna,cna2;
    if(rt==0){
        // For Student
        *selectionst = 2;
        cna = " Enroll ";
        cna2 = " Course Enrollment ";
    }
    else
    {
        // For Teacher
        *selectionst= 1;
        cna = " Teach ";
        cna2 = " Teaching Course Selection ";
    }

    for(int fl = 0;fl <=*selectionst;fl++)
    {



    while(a)
        {
        system("CLS");
        */
        int b;
        int a=true;
    if(b==1)
    {
        cout<<endl<<"\t\t\twrong Selection Try Again ";
        cout<<endl<<"\t\t\tEnter Course Number Not Code";
    }
     courseslist();
        //cout<<endl<<endl<<"\t\t\tThe Above Courses Currently Available To Teach\n\t\t\t";
        //cout<<endl<<"\t\t\tYou are Eligible to  only "<<*selectionst<<" Courses.";
        cout<<endl<<"\t\t\tEnter Course Number to Continue Selection";
        cout<<endl<<"\t\t\tEnter : ";
        int inputct;
        cin>>inputct;

            for (int i = 0; i < *cn ; ++i)
            {
                if(i+1==inputct)
                {
                    a=false;
                    cout<<endl<<"\t\t\tCourse Selected Successfully";
                     /*coursereglist[0][0]=courseslistarray[inputct-1][0];
                     coursereglist[0][1]=courseslistarray[inputct-1][1];
                     coursereglist[0][2]=courseslistarray[inputct-1][2];*/
                    while(a==false)
                    {
                        break;
                    }
                }
            } b=1;
        }

void course::getcourseteaching()
{
    cout<<endl<<"\t\t\tDear Teacher You are currently Teaching "<<course1<<" & "<<course2;
}
void course::getcourseenrolledstu(int a,int b,int c)
{
    int d;
    /*for(d=0;d<=2;d++)
    {
    cout<<endl<<"\t\t\tEnter : ";
    int inputct;
    cin>>inputct;


    //If You Un comment this below change "a" with inputct.

    */
    // Here due to Defined Values Program Variable some Functions changed
    cout<<endl<<"\n\t\t\tYou are Currentley Enrolled In : ";
    cout<<endl<<"\t\t\t****************************************************************";
    cout << endl << "\t\t\t" <<"Course "<</*d+1<<*/" Name  : " <<courseslistarray[a-1][0];
    cout << endl << "\t\t\t" << "Course Code    : "<<courseslistarray[a-1][1];
    cout << endl << "\t\t\t" << "Course Teacher : "<<courseslistarray[a-1][2]<<endl;
    cout<<endl<<"\t\t\t****************************************************************";
    cout << endl << "\t\t\t" <<"Course "<</*d+1<<*/" Name  : " <<courseslistarray[b-1][0];
    cout << endl << "\t\t\t" << "Course Code    : "<<courseslistarray[b-1][1];
    cout << endl << "\t\t\t" << "Course Teacher : "<<courseslistarray[b-1][2]<<endl;
    cout<<endl<<"\t\t\t****************************************************************";
    cout << endl << "\t\t\t" <<"Course "<</*d+1<<*/" Name  : " <<courseslistarray[c-1][0];
    cout << endl << "\t\t\t" << "Course Code    : "<<courseslistarray[c-1][1];
    cout << endl << "\t\t\t" << "Course Teacher : "<<courseslistarray[c-1][2]<<endl;
    cout<<endl<<"\t\t\t****************************************************************";
    //}
    /*
    {
        cout<<endl<<endl<<"\t\t\tEnter Number of Student Of First Course \n\t\t\tEnter : ";
        cin>>nums1;
        cout<<endl<<endl<<"\t\t\tEnter Number of Student Of Second Course \n\t\t\tEnter : ";
        cin>>nums2;
        cout<<endl<<endl<<"\t\t\tEnter Number of Student Of Third Course \n\t\t\tEnter : ";
        cin>>nums3;
    }*/
}

void course::coursedeenroll()
{  /* int rt;
    swito=rt;
    string cna,cna2;
   if(rt==0){
        // For Student
        *selectionst = 2;
        cna =" Enrolled in ";
    }
  else
    {
        // For Teacher
        *selectionst= 1;
        cna = " Teaching Enrolled in ";
    }
    */

    cout<<endl<<"You are Currently in"<<*selectionst<<" courses.";
    cout<<endl<<"\t\t\t****************************************************************";
    for (int i = 0; i < *selectionst ; ++i) {
        cout << endl << "\t\t\t" <<"Course "<<i+1<<" Name  : " <<coursereglist[i][0];
        cout << endl << "\t\t\t" << "Course Code    : "<<coursereglist[i][1];
        if(*selectionst==2)
            {
        cout << endl << "\t\t\t" << "Course Teacher : "<<coursereglist[i][2]<<endl;
        }
        cout<<endl<<"\t\t\t****************************************************************";
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
 int course::operator++()
 {
      cout<<endl<<endl<<"\t\t\tResultant is  "<<course::courseslistarray[0][0] + course::courseslistarray[1][0] + course::course::courseslistarray[2][0]<<endl;
      cout<<endl<<"\t\t\tResultant is "<<course::courseslistarray[0][1] + course::courseslistarray[1][1] + course::courseslistarray[2][1]<<endl;
      cout<<endl<<"\t\t\tResultant is "<<course::nums1 + course::nums2 + course::nums3<<endl;
      cout<<endl<<"\t\t\tResultant is "<<course::courseslistarray[0][2] + course::courseslistarray[1][2] + course::courseslistarray[2][2]<<endl;

 };
void course::printdata()
{
    courseslist();
    numberofstudentreg();
    operator++();
}
