//  Code Available Also Available on My GitHub Account At github.com/azharthegeek/assignment-2
//  Currently Private Repository

#include<iostream>
#include<string>
#include<conio.h>
#include<windows.h>
#include<time.h>

#include"person.h"
#include"teacher.h"
#include"course.h"
#include"Student.h"

using namespace std;

void mainloop();
void personoption();
void teacheroption();
void studentoption();
void courseoption();
void alloptions();

int main()
{
     system("CLS");
     system("Color B0");
     //system("mode 500");
     system("mode con COLS=700");
     ShowWindow(GetConsoleWindow(),SW_MAXIMIZE);
     SendMessage(GetConsoleWindow(),WM_SYSKEYDOWN,VK_RETURN,0x20000000);
     for(int i=1;i<=30;i++)
     {
     system("CLS");
     cout<<endl<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
     cout<<endl<<"\t\t\t                          Welcome Screen"<<endl;
     cout<<"\t\t\t                        OOP Assignment # 02 ";
     cout<<endl<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
     cout<<"\n\n\t\t\t";
     for(int j=1;j<=i;j++)
     cout<<"²";
     if( i > 1 && i < 100){
     cout<<endl<<endl<<"\t\t\tSindh Madressatul Islam University";
     cout<<endl<<endl<<"\t\t\tAssigned By : Zubair uddin Shaikh";
     cout<<endl<<"\t\t\tCreated By  : Muhammad Azhar"<<endl;
     cout<<"\t\t\tID          : CSC-19F-069"<<endl;
     cout<<"\t\t\tSection     : 2B"<<endl;}

     Sleep(1);
      }

system("CLS");
mainloop();
}
//#######################################################################################
//#######################################################################################
void mainloop()
{
    system("CLS");
    char classselection;
    cout<<endl<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
    cout<<endl<<"\t\t\t  Sindh Madressatul Islam University";
    cout<<endl<<"\t\t\t  Assignment # 02 Object Oriented Programming Using Inheritance"<<endl;
    cout<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";

    cout<<endl<<endl<<"\t\t\tAssigned By : Zubair uddin Shaikh";
    cout<<endl<<"\t\t\tCreated By  : Muhammad Azhar"<<endl;
    cout<<"\t\t\tID          : CSC-19F-069"<<endl;
    cout<<"\t\t\tSection     : 2B"<<endl;

    cout<<endl<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
    cout<<endl<<"\t\t\t\t\t Welcome to University Portal "<<endl;
    cout<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";

    cout<<endl<<endl<<"\t\t\tThere Are Four Functionalities Available to work on :"<<endl;
    cout<<"\t\t\tSelect An Option to Continue Work :"<<endl<<endl;

    cout<<"\t\t\t1. Person "<<endl;
    cout<<"\t\t\t2. Teacher"<<endl;
    cout<<"\t\t\t3. Student"<<endl;
    cout<<"\t\t\t4. Available Courses List"<<endl;
    cout<<"\t\t\t5. Run Whole Functionalities"<<endl;
    cout<<"\t\t\t6. Exits";

    cout<<endl<<endl<<"\t\t\tEnter the Selected Number To Continue : ";
    cin>>classselection;
    if (classselection == '1')
    {
        system("CLS");
        personoption();
    }
    else if (classselection == '2')
    {
        system("CLS");
        teacheroption();
    }
    else if (classselection == '3' )
    {
        system("CLS");
        studentoption();
    }
     else if (classselection == '4' )
    {
        system("CLS");
        courseoption();
    }
    else if (classselection == '5' )
    {
        system("CLS");
        alloptions();
    }
}
//#######################################################################################
//#######################################################################################

void personoption()
{

    person a("Muhammad Azhar","12/JAN/2020","House # 80  Nazimabad No#1 Karachi","Flat No # 15  Nazimabad No#1 Karachi");
        cout<<endl<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
    cout<<endl<<"\t\t\t\t\t\t Welcome to Person "<<endl;
    cout<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl<<endl;
    cout<<endl<<"\t\t\tThis Space Is Dadicated to User Define Vales \n\t\t\tIf You want to take User Values De-Comment The Below Functions define in main.cpp & in person Every Function Work Correctley";
    //a.setname();       //To get Person Name      Setter
    //a.setbirth();      //To Get Person Birth     Setter
    //a.setadress();     //To Get Person Address    Setter
    //a.changeaddress(); //To Change Person Address   Setter

    //a.getname();        //Getter
    //a.getbirth();       //Getter
    //a.getaddress();     //Getter

    cout<<endl<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
    cout<<endl<<"\t\t\tSummary :";
    a.printdata();   // Print Data
    cout<<endl<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";

    char classselection;
    cout<<endl<<endl<<"\t\t\tSelect An Option to Continue Work :"<<endl<<endl;
    cout<<"\t\t\t1. Run Again This Function"<<endl;
    cout<<"\t\t\t2. Main Menu"<<endl;
    cout<<"\t\t\t3. Exits"<<endl;

    cout<<endl<<"\t\t\tEnter : ";
    cin>>classselection;
    if (classselection == '3')
    {
    	while(true)
    	{
    		break;
		}

    }
    else if (classselection == '1')
    {
        system("CLS");
        personoption();
    }
    else if (classselection == '2')
        {
        mainloop();
        }
}
//#######################################################################################
//#######################################################################################

void teacheroption()
{
    cout<<endl<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
    cout<<endl<<"\t\t\t\t\t\t Welcome to Teacher Section "<<endl;
    cout<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
    teacher b("Zubair uddin Shaikh","PF786","House # 12 Nazimabad No 1,Karachi Pakistan", "030011111111","ZubairuddinShaikh@gmail.com ","12/01/1995");
    //b.setname();           //To get Teacher Name      Setter
    //b.generateUniqueInt();   //To get Teacher ID      Setter
    //b.setadress();
    //b.setphonenumber();
   //b.setemailaddress();
    //b.setbirth();

    int w=0;
    b.courseenrolled(w);

    b.addcourse();
    b.removecourse();
    b.changesemailaddress();
    b.changesphonenumber();
    b.changeaddress();

   /*
g. Constructor(s)
h. Getters, Setters for every data member (if necessary).
i. Addition of course(s)>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
j. Removal of course(s)>>>>>>>>>>>>>>>>>>>>>>>>>>>>




   */

    char classselection;
    cout<<endl<<endl<<"\t\t\tSelect An Option to Continue Work :"<<endl<<endl;
    cout<<"\t\t\t1. Run Again This Function"<<endl;
    cout<<"\t\t\t2. Main Menu"<<endl;
    cout<<"\t\t\t3. Exits"<<endl;

    cout<<endl<<"\t\t\tEnter : ";
    cin>>classselection;
    if (classselection == '3')
    {
    	while(true)
    	{
    		break;
		}

    }
    else if (classselection == '1')
    {
        system("CLS");
        teacheroption();
    }
    else if (classselection == '2')
        {
        mainloop();
        }
}
//#######################################################################################
//#######################################################################################

void studentoption()
{

    cout<<endl<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
    cout<<endl<<"\t\t\t\t\t\t Welcome to Student "<<endl;
    cout<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl<<endl;
    /*
    Student Name
b. Student ID
c. Date of Birth
d. Course(s) he/she is enrolled in
e. Phone Number
f. Mailing address
g. Email address
    */
    student c;
    c.setname();
    c.generateUniqueInt();
    c.getbirth();
    int w=0;
    c.courseenrolled(w);
    c.setphonenumber();
    c.setadress();
    c.setemailaddress();

    c.changesemailaddress();
    c.changeaddress();
    c.changesphonenumber();

    /*
    Constructor(s)
b. Getters, Setters for every data member (if necessary).
c. Change of email address
d. Change of mailing address
e. Change of Phone Number
f. Enroll in a course >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

    */
    char classselection;
    cout<<endl<<endl<<"\t\t\tSelect An Option to Continue Work :"<<endl<<endl;
    cout<<"\t\t\t1. Run Again This Function"<<endl;
    cout<<"\t\t\t2. Main Menu"<<endl;
    cout<<"\t\t\t3. Exits"<<endl;

    cout<<endl<<"\t\t\tEnter : ";
    cin>>classselection;
    if (classselection == '3')
    {
    	while(true)
    	{
    		break;
		}

    }
    else if (classselection == '1')
    {
        system("CLS");
        studentoption();
    }
    else if (classselection == '2')
        {
        mainloop();
        }
}
//#######################################################################################
//#######################################################################################

void courseoption()
{

    cout<<endl<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
    cout<<endl<<"\t\t\t\t\tWelcome to Course Available list "<<endl;
    cout<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl<<endl;
 course d;
d.courseslist();
d.numberofstudentreg();
int w=0;
    d.courseenrolled(w);
/*
Course Name
b. Course Code
c. Number of students registered >>>>>>>>>>>>
d. Teacher of the course
*/



    char classselection;
    cout<<endl<<endl<<"\t\t\tSelect An Option to Continue Work :"<<endl<<endl;
    cout<<"\t\t\t1. Run Again This Function"<<endl;
    cout<<"\t\t\t2. Main Menu"<<endl;
    cout<<"\t\t\t3. Exits"<<endl;

    cout<<endl<<"\t\t\tEnter : ";
    cin>>classselection;

    if (classselection == '3')
    {
    	while(true)
    	{
    		break;
		}

    }
    else if (classselection == '1')
    {
        system("CLS");
        courseoption();
    }
    else if (classselection == '2')
        {
        mainloop();
        }
}
//#######################################################################################
//#######################################################################################

void alloptions()
{

person a;
teacher b;
student c;
course d;

    char classselection;
    cout<<endl<<endl<<"\t\t\tSelect An Option to Continue Work :"<<endl<<endl;
    cout<<"\t\t\t1. Run Again This Function"<<endl;
    cout<<"\t\t\t2. Main Menu"<<endl;
    cout<<"\t\t\t3. Exits"<<endl;

    cout<<endl<<"\t\t\tEnter : ";
    cin>>classselection;
    if (classselection == '3')
    {
    	while(true)
    	{
    		break;
		}

    }
    else if (classselection == '1')
    {
        system("CLS");
        alloptions();
    }
    else if (classselection == '2')
        {
        mainloop();
        }
}

