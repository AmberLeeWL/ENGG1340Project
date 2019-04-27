//main.h

#ifndef Header_h
#define Header_h

#include "src.h"
#include "Add.cpp"
#include "Print.cpp"
#include "Edit.cpp"
#include "Delete.cpp"

using namespace std;

struct userlogin{
    string n;
    string p;
};

void printoption();

void editfunction(char userfilename, char userinfoname, userinfo user[]);

string quit();

int main();

#endif
