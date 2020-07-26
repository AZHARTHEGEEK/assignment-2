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
     for(int i=1;i<=50;i++)
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

     Sleep(10);
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

    person a;
        cout<<endl<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
    cout<<endl<<"\t\t\t\t\t\t Welcome to Person "<<endl;
    cout<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl<<endl;
    a.setname();
    a.setbirth();
    a.setadress();
    a.changeaddress();
    cout<<endl<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
    cout<<endl<<"\t\t\tSummary :";
    a.printdata();
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
    cout<<endl<<"\t\t\t\t\t\t Welcome to Teacher "<<endl;
    cout<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl<<endl;
    teacher b;
   b.generateUniqueInt();
   b.courseenrolled();
   b.stuphonenumber();
   b.stuemailaddress();
   b.changesemailaddress();
   b.changesphonenumber();
   b.changeaddress();

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
    student c;
    c.test();
    c.setname();
 c.generateUniqueInt();
   c.courseenrolled();
   c.stuphonenumber();
   c.stuemailaddress();
   c.changesemailaddress();
   c.changesphonenumber();
   c.changeaddress();
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
    cout<<endl<<"\t\t\t\t\t\t Welcome to Course Available list "<<endl;
    cout<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl<<endl;
 course d;
 d.test();


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

