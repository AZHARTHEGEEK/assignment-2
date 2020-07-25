#include<iostream>
#include<string>
#include"base.h"
#include<conio.h>

using namespace std;

parent::parent()
{
    cout<<endl<<"\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
}
//###########################################################################
string parent::setname()
{
    cout<<"\t\t\tEnter Your Name: ";
    cin.ignore();
    getline(cin,name);

}
//###########################################################################
string parent::getname()
{
   cout<<endl<<"\t\t\tName : "<<name;
}
//###########################################################################
string parent::setbirth()
{
    cout<<"\t\t\tEnter Your Date of Birth : ";
    getline(cin,birth);

}
//###########################################################################

string parent::getbirth()
{
   cout<<endl<<"Date of Birth : "<<birth;
}
//###########################################################################
string parent::setadress()
{
    cout<<"\t\t\tEnter Your Address : ";
    getline(cin,address);

}
//###########################################################################
string parent::getaddress()
{
   cout<<endl<<"\t\t\tAddress : "<<address;
}
//###########################################################################
string parent::printdata()
{
    cout<<endl<<endl<<"\t\t\tSummary :";
    cout<<endl<<endl<<"\t\t\tName : "<<name;
    cout<<endl<<"\t\t\tDate of Birth : "<<birth;
    cout<<endl<<"\t\t\tAddress : "<<address<<endl;
}
//###########################################################################
string parent :: changeaddress()
    {
        char name;
    cout<<endl<<"\t\t\tDo you want to change Address? If yes, then type 'Y' otherwise type 'N'.";
    cin>>name;
    if(name=='Y' || name == 'y')
    {
        cout<<"\t\t\tEnter Your New Address : ";
        cin.ignore();
        getline(cin,address);
    }
    }
