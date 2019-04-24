//Add record function

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
            cout << '-'<<endl;
        }
        else {
            cout << '-';
        }
    }
}

int Add(string userfilename,string userinfoname){
    bool confirm = false;
    ofstream fuser;
    ofstream fout;
    userinfo user;
    
    cout << setw(42);
    cout << "-Add Record-" << endl;
    fout.open(userfilename,ios::app);
    if ( fout.fail() ) {
        cout << "Error in opening file " << userfilename << endl;
        exit(1);
    }
    fuser.open(userinfofilename,ios::app);
    if ( fuser.fail() ) {
        cout << "Error in opening file " << userinfofilename << endl;
        exit(1);
    }
    else{
        printbreak();
        while (confirm == false){
            char choice;
            cout << "Please enter new username             : ";
            cin >> user.Name;
            cout << "Please enter new user password        : ";
            cin >> user.Password;
            cout << "Please enter occupation               : ";
            cin >> user.Occupation;
            cout << "Please enter monthly income           : ";
            cin >> user.Income;
            cout << "Please enter expense on rent          : ";
            cin >> user.Expense[0];
            cout << "Please enter expense on food          : ";
            cin >> user.Expense[1];
            cout << "Please enter expense on transportation: ";
            cin >> user.Expense[2];
            cout << "Please enter expense on entertainment : ";
            cin >> user.Expense[3];
            cout << "Please enter expense on debts/loans   : ";
            cin >> user.Expense[4];
            cout << "Please enter budget                   : ";
            cin >> user.Budget;
            cout << "Please enter amount of cash in hand   : ";
            cin >> user.Account[0];
            cout << "Please enter balance of bank card     : ";
            cin >> user.Account[1];
            cout << "Please enter blance of credit card    : ";
            cin >> user.Account[2];
            cout << " " << endl;
            cout << "Please confirm your information(Y/N): ";
            cin >> choice;
            if (choice == 'Y' || choice == 'y'){
                confirm = true;
            }
        }
        fuser << user.Name << endl;
        fout << user.Name << endl;
        fout << user.Password << endl;
        fuser << user.Occupation << endl;
        fuser << user.Income << endl;
        fuser << user.Expense[0] << endl;
        fuser << user.Expense[1] << endl;
        fuser << user.Expense[2] << endl;
        fuser << user.Expense[3] << endl;
        fuser << user.Expense[4] << endl;
        fuser << user.Budget << endl;
        fuser << user.Account[0] << endl;
        fuser << user.Account[1] << endl;
        fuser << user.Account[2] << endl;
    }
    fout.close();
    fuser.close();
    
    return 0;
}
