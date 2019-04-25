//Add.h

#include <iostream>
#include <iomanip>
#include <string>
#include <list>
#include <ctime>
#include <fstream>

const int add_stdwidth = 69;

struct userinfo{
    char Name[40];
    char Password[30];
    char Occupation[30];
    double Income;
    double Expense[5];
    double Budget;
    double Account[3];
    string Mdate;
};

void printbreak();

int Add(string userfilename,string userinfoname);
