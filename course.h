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
    string stureg[200]=  { };
    void courseenrolled(int);
    int coursesnumber = 5;
    int *cn=&coursesnumber;
    int nums;
    int *numstu = &nums;
    //string aray is most difficult part
    //string *cp=courseslistarray;
    course();
    void courseslist();
    void numberofstudentreg();
    void changeofteacher();
    int *selectionst;
    string coursereglist[50][50];
    void coursedeenroll(int);
    int swito;

};


  #endif



