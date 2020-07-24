#include<iostream>
#include<string>
#include"base.h"
#include<conio.h>

using namespace std;

parent::parent()
{
    cout<<endl<<"\t\t\t******************Welcome******************"<<endl<<endl;
}
//###########################################################################
string parent::setname()
{
    cout<<"Enter Your Name: ";
    getline(cin,name);

}
//###########################################################################
string parent::getname()
{
   cout<<endl<<"Name : "<<name<<endl;
}
//###########################################################################
string parent::setbirth()
{
    cout<<"Enter Your Date of Birth : ";
    getline(cin,birth);

}
//###########################################################################

string parent::getbirth()
{
   cout<<endl<<"Date of Birth : "<<birth<<endl;
}
//###########################################################################
string parent::setadress()
{
    cout<<"Enter Your Address : ";
    getline(cin,address);

}
//###########################################################################
string parent::getaddress()
{
   cout<<endl<<"Address : "<<address<<endl;
}
//###########################################################################
string parent::printdata()
{
    cout<<endl<<"Name : "<<name<<endl;
    cout<<endl<<"Date of Birth : "<<birth<<endl;
    cout<<endl<<"Address : "<<address<<endl;
}
//###########################################################################
string parent :: changeaddress()
    {
        char name;
    cout<<endl<<"\t\t\tDo you want to change Address? If yes, then type 'Y' otherwise type 'N'.";
    cin>>name;
    if(name=='Y' || name == 'y')
    {
        cout<<"Enter Your New Address : ";
        cin.ignore();
        getline(cin,address);


    }
    }
