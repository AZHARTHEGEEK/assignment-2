
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
void course::test()
{
    cout<<endl<<"\t\t\t unde working"<<endl;
}

void course::courseslist()
{
    string courseslistarray[150][150]= {
                                        {"Object Oriented Programming (OOP)","CSC 104"},
                                        {"Foreign Language Arabic","CSC "},
                                        {"Probability & Statistics","MAT100"},
                                        {"Communication Skills","ENG201"},
                                        {"Digital Logic & Design","CEN201"},
                                        {"Programing Fundamentals","CSC103"}};

        for (int i = 0; i < 6; ++i) {

        // access columns of the array
        for (int j = 0; j < 2; ++j) {
            cout <<endl<< "test[" << i << "][" << j << "] = " << courseslistarray[i][j] << endl;
        }
                 }


                         /*  {" ",}
                                        {"",}
                                        {"",}
                                        {"",}
                                        {"",}
                                        {"",}
                                        {"",}
                                        {"",}
                                        {"",}
                                        {""}
*/
    cout<<endl<<"\t\t\tThe Available Course List :";
    cout<<endl<<"\t\t\tObject Oriented Programing";
    cout<<endl<<"\t\t\tThe Available Course List :";
    cout<<endl<<"\t\t\tThe Available Course List :"<<endl;
}
