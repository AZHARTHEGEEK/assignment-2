#include<iostream>
#include<string>
#include"Student.h"
using namespace std;

student::student()
  {
      cout<<endl<<endl<<"\t\t\t\tWelcome To Student Class "<<endl<<endl;

  }

/*
void student::generateuniqueid()
{
     toi=toi+1;
     while(toi::)
     cout<<"Unique ID : "<<*i<<" "<<endl<<endl;
}
*/
int student::generateUniqueInt()
{
    i++;
    cout<<endl<<"Enter Your ID Please ";
    getline(cin,id[i]);
    cin.ignore();

}
void student:: printiddata()
{
    int a;
    int arrSize = sizeof(id)/sizeof(id[0]);
    for(a=0;a==arrSize;a++)
    {
        cout<<endl<<endl<<"here here here here "<<id[a]<<endl<<endl;
    }
}
