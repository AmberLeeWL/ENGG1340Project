#include <iostream>
#include <iomanip>
#include <string>
#include <list>
#include <ctime>
#include <fstream>

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

int print_main();
