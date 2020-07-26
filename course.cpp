
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
for (int i = 0; i < 5; ++i) {
        cout <<endl<< "\t\t\t"<<courseslistarray[i][0] <<"    : "<<courseslistarray[i][1]<<"    : "<<courseslistarray[i][2];
        // access columns of the array
        //for (int j = 0; j < 1; ++j) {
        //cout << "courseslistarray[" << i << "][" << j << "] = " << courseslistarray[i][j] << endl;

        }
                 }
