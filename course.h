#pragma once
#ifndef Included_COURSE_H
#define Includeed_COURSE_H

#include<conio.h>
#include<iostream>
#include<string>

using namespace std;
class course
{
public:
    string courseslistarray[50][100]=  {
                                        {"Object Oriented Programming (OOP)","CSC 104","Mr. Zubair Uddin Shaikh"},
                                        {"Foreign Language Arabic","CSC ","Ms. Maryam Feroz"},
                                        {"Probability & Statistics","MAT100","Mr. Hassan Hashim"},
                                        {"Communication Skills","ENG201","Ms. Samreen Riaz "},
                                        {"Digital Logic & Design","CEN201","Mr. Haque Nawaz Lashari"}};
    int coursesnumber = 5;
    int *cn=&coursesnumber;
    //string aray is most difficult part
    //string *cp=courseslistarray;
    course();
    void courses_add_remove_list();

};


  #endif



