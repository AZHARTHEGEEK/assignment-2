#include<iostream>
#include<string>
#include<conio.h>
#include"person.h"
#include"teacher.h"
#include"course.h"
#include"Student.h"
using namespace std;


int main()
{
    person a;
    a.setname();
    a.setbirth();
    a.setadress();
    a.changeaddress();
    a.printdata();

    teacher b;
    b.changeaddress();

	return 0;
}
