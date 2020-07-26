
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
void course::courses_add_remove_list()
{
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
        courses_add_remove_list();
}

    cout<<endl<<endl<<"\t\t\tIf You Want to Remove  Course in Above List";
    cout<<endl<<"\t\t\tEnter \"Y\" to Add \"N\" to Skip";
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
        courses_add_remove_list();
}
}

