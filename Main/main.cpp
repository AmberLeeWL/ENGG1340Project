//main.cpp

#include "src.h"
#include "Add.cpp"
#include "Print.cpp"

using namespace std;

struct userlogin{
    string n;
    string p;
};

void editfunction(char userfilename, char userinfoname, userinfo user[]) {
    cout << "Please enter the user name";
    cin >> username;
    if (userfilename != username){
        cout << "Unvalid username";
        return 0;
    }
    else{
        for (int i=0;i<MAX_data;i++) {
            if (user[i].Name == username){
                Edit(userfilename, userinfoname, user[i]);
                break;
            }
        }
    }
}
               
         
         
        Edit(userfilename, userinfoname, user[i]);
        break; 
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
    string username;
    string password];
    int option=0;
    string temp,in_date,out_date;
    ifstream fin;
    ifstream fuser;
    ifstream finfo;
    ofstream fout;
    string name[MAX_data];
    string pw[MAX_data];
    int count = 0;
    userinfo user[MAX_data];
    int u;
    
    cout << setw(52);
    cout << "-Welcome to Accounting System v0.1-" << endl;
    fin.open(logfilename);
    fuser.open(userfilename);
    finfo.open(userinfoname);
    fout.open(logfilename,ios::app);
    if ( fin.fail() ) {
        cout << "Error in opening file " << logfilename << endl;
        exit(1);
    }
    else{
        fin.seekg(-1,ios_base::end);
        if(fin.peek() == '\n'){
            fin.seekg(-1,ios_base::cur);
            int i = fin.tellg();
            for(i;i>0;i--){
                if(fin.peek() == '\n'){
                    fin.get();
                    break;
                }
                fin.seekg(i,ios_base::beg);
            }
        }
        getline(fin,in_date);
    }
    if ( fuser.fail() ) {
        cout << "Error in opening file " << userfilename << endl;
        exit(1);
    }
    if ( finfo.fail() ) {
        cout << "Error in opening file " << userinfoname << endl;
        exit(1);
    }
    int t = 0;
    string line;
    while (getline(fuser,line)){
        t++;
    }
    count = t/2;
    string* userpw = new string[t];
    for (int i = 0;i<t;i++){
        getline(fuser,userpw[i]);
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
    for (int k=0;k<count;k++){
        finfo >> user[k].Name;
        finfo >> user[k].Password;
        finfo >> user[k].Occupation;
        finfo >> user[k].Income;
        finfo >> user[k].Expense[0];
        finfo >> user[k].Expense[1];
        finfo >> user[k].Expense[2];
        finfo >> user[k].Expense[3];
        finfo >> user[k].Expense[4];
        finfo >> user[k].Budget;
        finfo >> user[k].Account[0];
        finfo >> user[k].Account[1];
        finfo >> user[k].Account[2];
    }
    
    cout << "Please enter your name    : ";
    cin >> username;
    for (int j =0;j<t;j++){
        if ((username != userpw[j]) && j==t-1){
            char addnew;
            cout << "No matching user, add new user?(Y/N): ";
            cin >>addnew;
            if (addnew == 'Y' || addnew == 'y'){
                add_main(userinfoname, userfilename);
            }
            if (addnew == 'N' || addnew == 'n'){
                exit(1);
            }
        }
        if (username == userpw[j]){
            cout << "Please enter your password: ";
            cin >> password;
            if (password == userpw[j+1]){
                for (int n=0;n<count;n++){
                    if (user[n].Name == username){
                        u = n;
                        break;
                    }
                }
            }
        }
    }
    printbreak();
    cout << "Hello, " << username << "!"<<endl;
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
        case 1: add_main(userinfoname,userfilename);
        case 2: Delete(userfilename,userinfoname);
        case 3: editfunction(userfilename, userinfoname, userinfo user);
        case 4: print_main(user[u]);
        case 5: out_date = quit();
    }
    fout << out_date << " (" << username << ")" << endl;
    fin.close();
    fuser.close();
    finfo.close();
    fout.close();
    cout << " " << endl;
    return 0;
}
