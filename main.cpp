#include<iostream>
#include<string>
#include<conio.h>
#include<windows.h>

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
system("Color B0");
system("CLS");
mainloop();
}

void mainloop()
{
    system("CLS");
    char classselection;
    cout<<endl<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
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

    cout<<"\t\t\t1. Person Function (Test Portal)"<<endl;
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


void personoption()
{
    person a;
    a.setname();
    a.setbirth();
    a.setadress();
    a.changeaddress();
    a.printdata();

    char classselection;
    cout<<endl<<endl<<"\t\t\tSelect An Option to Continue Work :"<<endl<<endl;
    cout<<"\t\t\t1. Run Again Person Function (Test Portal)"<<endl;
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


void teacheroption()
{
    teacher b;
    b.changeaddress();
}


void studentoption()
{
    student ab;
    ab.setname();
}


void courseoption()
{

}


void alloptions()
{

}
