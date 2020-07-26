
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
for (int i = 0; i < 6; ++i) {
        cout <<endl<< "\t\t\t"<<courseslistarray[i][0] <<"    : ";
        // access columns of the array
        for (int j = 0; j < 1; ++j) {
            cout <<courseslistarray[i][1];
        }
                 }


}
