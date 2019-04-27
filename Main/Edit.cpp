//Edit record function

#include "src.h"

using namespace std;

void printoption(){
     cout << left << setw(20) << "1. Username";
     cout << left << setw(20) << "2. Occupation";
     cout << left << setw(20) << "3. Monthly income";
     cout << left << setw(20) << "4. Expense on rent";
     cout << left << setw(20) << "5. Expense on food";
     cout << left << setw(20) << "6. Expense on transportation";
     cout << left << setw(20) << "7. Expense on entertainment";
     cout << left << setw(20) << "8. Expense on debts/loans";
     cout << left << setw(20) << "9. Budget";
     cout << left << setw(20) << "10. Amount of cash in hand";
     cout << left << setw(20) << "11. Balance of bank card";
     cout << left << setw(20) << "12. Balance of credit card";
     cout << " " << endl;
}
  
int Edit(string userfilename,string userinfoname, user[]){
    char choice, username;
    string line;
    int option=0;
    ofstream fout;
    ofstream fuser;
    userinfo user;
    
    cout << setw(42);
    cout << "-Edit-" << endl;
    fout.open(userfilename,ios::app);
    if ( fout.fail() ) {
       cout << "Error in opening file " << userfilename << endl;
       exit(1);
    }
    fuser.open(userinfofilename,ios:app);
    if ( fuser.fail() ) {
       cout << "Error in opening file " << userinfofilename << endl;
       exit(1);
    }
    else{
      printbreak();
      cout << "Please enter the username: ";
      cin >> username;
      cout << "Confirm (Y/N): ";
      cin >> choice;
      if (choice != 'Y' && choice !='y'){
         return 0;
      }
      printbreak();
      cout << "User name                : " << user.Name << endl;
      cout << "Occupation               : " << user.Occupation << endl;
      cout << "Monthly income           : " << user.Income << endl;
      cout << "Expense on rent          : " << user.Expense[0] << endl;
      cout << "Expense on food          : " << user.Expense[1] << endl;
      cout << "Expense on transportation: " << user.Expense[2] << endl;
      cout << "Expense on entertainment : " << user.Expense[3] << endl;
      cout << "Expense on debts/loans   : " << user.Expense[4] << endl;
      cout << "Budget                   : " << user.Budget << endl;
      cout << "Amount of cash in hand   : " << user.Account[0] << endl;
      cout << "Balance of bank card     : " << user.Account[1] << endl;
      cout << "Balance of credit card   : " << user.Account[2] << endl;
      printbreak();
      printoption();
      cout << "Please choose what to be edited (1-12): ";
      cin >> option;  
      switch(option){
            case 1: 
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
    }
    fout.close();
    fuser.close();
      
    return 0;
}
