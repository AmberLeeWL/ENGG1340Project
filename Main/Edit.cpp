//Edit record function

#include <iostream>
#include <iomanip>
#include <string>
#include <list>
#include <ctime>
#include <fstream>

using namespace std;

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
  
void printbreak(){
  for (int i=0;i<add_stdwidth;i++){
    if (i==add_stdwidth-1){
      cout << '-' << endl;
    }
    else{
      cout << '-';
    }
  }
}

int Edit(string userfilename,string userinfoname){
    bool confirm = false;
    
    
    
    switch(option){
      case 1:   
      case 2:
      case 3:
      case 4:
      case 5:
      
    }
    return 0;
}
