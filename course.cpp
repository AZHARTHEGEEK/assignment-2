
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
cout<<endl<<"\t\t\t****************************************************************";
for (int i = 0; i < 5; ++i) {
        cout << endl << "\t\t\t" <<"Course "<<i+1<<" Name  : " <<courseslistarray[i][0];
        cout << endl << "\t\t\t" << "Course Code    : "<<courseslistarray[i][1];
        cout << endl << "\t\t\t" << "Course Teacher : "<<courseslistarray[i][2]<<endl;
        cout<<endl<<"\t\t\t****************************************************************";


        // access columns of the array
        //for (int j = 0; j < 1; ++j) {
        //cout << "courseslistarray[" << i << "][" << j << "] = " << courseslistarray[i][j] << endl;

        }
                 }
