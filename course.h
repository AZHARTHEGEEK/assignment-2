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
    string courseslistarray[150][10]=  {
                                        {"Object Oriented Programming (OOP)","CSC 104"},
                                        {"Foreign Language Arabic","CSC "},
                                        {"Probability & Statistics","MAT100"},
                                        {"Communication Skills","ENG201"},
                                        {"Digital Logic & Design","CEN201"},
                                        {"Programing Fundamentals","CSC103"}};
    course();
    void courseslist();
};


  #endif



