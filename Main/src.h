//src.h

#ifndef scr_h
#define scr_h

#include <iostream>
#include <iomanip>
#include <string>
#include <list>
#include <ctime>
#include <fstream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

const int MAX_data = 1000;
const char logfilename[80] = "SystemLog.txt";
const char userfilename[80] = "User.txt";
const char userinfoname[80] = "UserInfo.txt";
const int stdwidth = 69;

struct userinfo{
    string Name;
    string Password];
    char Occupation[30];
    double Income;
    double Expense[5];
    double Budget;
    double Account[3];
};

void printbreak(){
    for (int i=0;i<stdwidth;i++){
        if (i==stdwidth-1){
            cout << '-'<<endl;
        }
        else {
            cout << '-';
        }
    }
}

#endif
