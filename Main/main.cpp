//Main

#include <iostream>
#include <iomanip>
#include <string>
#include <list>
#include <ctime>
#include <fstream>

using namespace std;

const int stdwidth = 69;
const char logfilename[80] = "SystemLog.txt";
const char userfilename[80] = "User.txt";

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

void printoption(){
    cout << "Functions available: " << endl;
    cout << left << setw(20) << "1. Add record";
    cout << left << setw(20) << "2. Delete record";
    cout << left << setw(20) << "3. Edit record" << endl;
    cout << left << setw(20) << "4. Print report";
    cout << left << setw(20) << "5. Quit" << endl;;
    cout << " " << endl;
}

string quit(){
    string date = "";
    cout << " " << endl;
    cout << "Saved." << endl;
    cout << "Last modified on: ";
    char s[19];
    time_t t = time(0);
    strftime(s, 19, "%X %d/%m/%Y", localtime(&t));
    cout << s << "." << endl;
    cout << "Thank you for using the system, bye!" << endl;
    for (int i=0;i<19;i++){
        date = date+s[i];
    }
    return date;
}

int main(){
    char user[30];
    char password[20];
    int option=0;
    string temp,in_date,out_date;
    ifstream fin;
    ifstream fuser;
    ofstream fout;
    
    cout << setw(52);
    cout << "-Welcome to Accounting System v0.1-" << endl;
    fin.open(logfilename);
    fuser.open(userfilename);
    fout.open(logfilename,ios::app);
    if ( fin.fail() ) {
        cout << "Error in opening file " << logfilename << endl;
        exit(1);
    }
    else{
        fin.seekg(-1, std::ios_base::end);
        if(fin.peek() == '\n'){
            fin.seekg(-1, std::ios_base::cur);
            int i = fin.tellg();
            for(i;i>0; i--){
                if(fin.peek() == '\n'){
                    fin.get();
                    break;
                }
                fin.seekg(i, std::ios_base::beg);
            }
        }
        getline(fin,in_date);
    }
    if ( fuser.fail() ) {
        cout << "Error in opening file " << userfilename << endl;
        exit(1);
    }
    if ( fout.fail() ) {
        cout << "Error in opening file " << logfilename << endl;
        exit(1);
    }
    cout << " " << endl;
    if (in_date != ""){
        cout << "Last modified on: " << in_date << endl;
    }
    printbreak();
    cout << "Please enter your name    : ";
    cin >> user;
    cout << "Please enter your password: ";
    cin >> password;
    printbreak();
    cout << "Hello, " << user << "!"<<endl;
    cout << " " << endl;
    printoption();
    cout << "Please choose the functions(1-5): ";
    cin >> option;
    while (not(option>0 && option<6)){
        cout << "Invalid input. Please try again." << endl;
        cout << "Please choose the functions(1-5): ";
        cin >> option;
    }
    switch(option){
        case 1: cout << "Heading to \"1. Add record\"" << "..." << endl; //to be replaced by function in Add.cpp
        case 2: cout << "Heading to \"2. Delete record\"" << "..." << endl; //to be replaced by function in Delete.cpp
        case 3: cout << "Heading to \"3. Edit record\"" << "..." << endl; //to be replaced by function in Edit.cpp
        case 4: cout << "Heading to \"4. Print report\"" << "..." << endl; //to be replaced by function in Print.cpp
        case 5: out_date = quit();
    }
    fout << out_date << " (" << user << ")" << endl;
    fin.close();
    fout.close();
    cout << " " << endl;
    cout << "Saved date: " << out_date << endl;
    return 0;
}
