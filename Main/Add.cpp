//Add record function

#include "src.h"

using namespace std;

int add_main(string userinfoname, string userfilename){
    userinfo user;
    bool confirm = false;
    ofstream fuser;
    ofstream fout;
    
    cout << setw(42);
    cout << "-Add Record-" << endl;
    fout.open(userfilename,ios::app);
    if ( fout.fail() ) {
        cout << "Error in opening file " << userfilename << endl;
        exit(1);
    }
    fuser.open(userinfoname,ios::app);
    if ( fuser.fail() ) {
        cout << "Error in opening file " << userinfoname << endl;
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
            cout << "Please enter balance of credit card    : ";
            cin >> user.Account[2];
            cout << "Please confirm your information(Y/N): ";
            cin >> choice;
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
    printbreak();
    cout << "New user " << user.Name << " added!" << endl;
    
    return 0;
}
