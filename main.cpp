/*
   #Attension

  *) GNU General Public License v3.0

  *) Code using Hybrid Inheritance

  *) Code Available Also Available on My GitHub Account At github.com/azharthegeek/assignment-2
     Currently Private Repository after Assignment Submission Last date it is switch to Public Repository
     So Everyone can participate but after project submission last date in Future

  *) If you want to Run This Program by getting Values From User Visit Repository and revert code to commit hash 7504842fdf787

  *) Almost Half of the code is commented due to defined Values The code is designed for users so skip these other vise follow above point.

  *) I tried My best to reduce errors according to my command (Knowledge) on c++.Hope make it better in Future.

*/


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

    cout<<"\t\t\t1.) Person  Class "<<endl;
    cout<<"\t\t\t2.) Teacher Class"<<endl;
    cout<<"\t\t\t3.) Student Class"<<endl;
    cout<<"\t\t\t4.) Course  Class"<<endl;
    cout<<"\t\t\t5.) Exits";

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
    /*
    else if (classselection == '5' )
    {
        system("CLS");
        alloptions();
    }*/
}
//#######################################################################################
//#######################################################################################

void personoption()
{

    person a("Muhammad Azhar","12/JAN/2020","House # 80  Nazimabad No#1 Karachi","Flat No # 15  Nazimabad No#1 Karachi");
    cout<<endl<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
    cout<<endl<<"\t\t\t\t\t\t Welcome to Person "<<endl;
    cout<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl<<endl;
    //cout<<endl<<"\t\t\tThis Space Is Dadicated to User Define Vales \n\t\t\tIf You want to take User Values De-Comment The Below Functions define in main.cpp & in person Every Function Work Correctley";
    //a.setname();       //To get Person Name      Setter
    //a.setbirth();      //To Get Person Birth     Setter
    //a.setadress();     //To Get Person Address    Setter
    //a.changeaddress(); //To Change Person Address   Setter

    //a.getname();        //Getter
    //a.getbirth();       //Getter
    //a.getaddress();     //Getter

    cout<<endl<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
    cout<<endl<<"\t\t\tSummary (Print Data):"<<endl;
    a.printdata();   // Print Data
    cout<<endl<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";

    // The Below Code Is Used To Switch to Different Functionalities
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
    teacher b("Zubair uddin Shaikh","PF786","House # 12 Nazimabad No 1,Karachi Pakistan", "030011111111","ZubairuddinShaikh@gmail.com ","12/01/1995","Zubair@gmail.com","0312000000","Object Oriented Programming", "Deep Learning","Bunglow # 12 Nazimabad No 1,Islamabad Pakistan","Machine Learning","Differential Mathematics" );
    //b.setname();           //To get Teacher Name      Setter
    //b.generateUniqueInt();   //To get Teacher ID      Setter
    //getid();        //Getter
    //b.setadress();            //setter
    //b.setphonenumber();            //setter
    //getphonenumber();        //Getter
    //b.setemailaddress();            //setter
    //b.getemailaddress();        //Getter
    //b.setbirth();            //setter
    //b.changesemailaddress();
    //b.changesphonenumber();
    //b.changeaddress();
    //b.courseenrolled();
    //b.getcourseteaching();        //Getter
    //b.addcourse();        //Getter
    //getaddcourses();        //Getter
    //b.removecourse();
    //b.getremovecourses();        //Getter
    //b.getcourseenrolledstu();        //Getter

    cout<<endl<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
    cout<<endl<<"\t\t\tSummary (Print data):"<<endl;
    b.printdata();   // Print Data             //Getter of all
    cout<<endl<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";


    // The Below Code Is Used To Switch to Different Functionalities
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

    student c("Muhammad Azhar", "CSC 19F 069","12/01/2002","House # 80  Nazimabad No#1 Karachi","03120001547","CSC19F069@stu.smiu.edu.pk",1,3,5,"Flat No # 15  Nazimabad No#1 Karachi","azharthegeek@gmail.com");
    //c.setname();               //setter
    //c.getname();               //getter
    //c.generateUniqueInt();               //getter
    //c.getid();               //getter
    //c.setbirth();               //setter
    //c.getbirth();               //setter

    //c.courseenrolled();               //getter
    //c.getcourseenrolledstu(1,3,5);               //getter
    //c.setphonenumber();               //setter
    //c.getphonenumber();               //getter
    //c.setadress();               //setter
    //c.getaddress();               //getter
    //c.setemailaddress();               //setter
    // c.getemailaddress();               //getter

    // c.changesemailaddress();
    //c.changeaddress();
    //c.getaddress();
    // c.changesphonenumber();


    cout<<endl<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
    cout<<endl<<"\t\t\tSummary (Print data):"<<endl;
    c.printdata();    // Print Data             //Getter of all
    cout<<endl<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";

    // The Below Code Is Used To Switch to Different Functionalities
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
    course d(12,54,22,1,3,5,4," OOP "," DLD ", "Arabic");
    //d.courseslist();
    //d.numberofstudentreg();
    //d.courseenrolled();
    //d.courselist();
    //d.changeofteacher();
    //d.getaddcourses();
    //d.getremovecourses();

    cout<<endl<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
    cout<<endl<<"\t\t\tSummary (Print data):"<<endl;
    d.printdata();    // Print Data             //Getter of all
    cout<<endl<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";

    // The Below Code Is Used To Switch to Different Functionalities
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
///#############################THE END################################################
///#############################THE END################################################
///#############################THE END################################################






// Skip Below Part CreaTed to Provide more Fuctionalities
//#######################################################################################
//#######################################################################################
/*
void alloptions()
{

person a;
teacher b;
student c;
course d;


    cout<<endl<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
    cout<<endl<<"\t\t\t\t\t\t Welcome to Person "<<endl;
    cout<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl<<endl;
    a.printdata();
    cout<<endl<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
    cout<<endl<<"\t\t\t\t\t\t Welcome to Teacher "<<endl;
    cout<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl<<endl;
    b.printdata();
    cout<<endl<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
    cout<<endl<<"\t\t\t\t\t\t Welcome to Student "<<endl;
    cout<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl<<endl;
    c.printdata();
    cout<<endl<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
    cout<<endl<<"\t\t\t\t\t\t Welcome to Course "<<endl;
    cout<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl<<endl;
    d.printdata();

    // The Below Code Is Used To Switch to Different Functionalities
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

*/
