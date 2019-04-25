//Print report function

#include <iostream>
#include <iomanip>
#include <string>
#include <list>
#include <ctime>
#include <fstream>

using namespace std;

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

int print_main(){
    ofstream fout;
    string date = "";
    struct user;
    char s[19];
    
    fout.open(user.Name+".txt");
    fout << setw(40) << "-Statistic Report of " << "<user.Name>" << endl;
    for (int i=0;i<69;i++){
        if (i==69-1){
            fout << '-'<<endl;
        }
        else {
            fout << '-';
        }
    }
    fout << "Date of printing: ";
    time_t t = time(0);
    strftime(s, 19, "%X %d/%m/%Y", localtime(&t));
    for (int i=0;i<19;i++){
        date = date+s[i];
    }
    fout << date << setw(32) << "|" <<endl;
    for (int i=0;i<69;i++){
        if (i==69-1){
            fout << '-'<<endl;
        }
        else {
            fout << '-';
        }
    }
    fout << "Occupation: " << "<user.Occupation>" << setw(40) << "|"<< endl;
    for (int i=0;i<69;i++){
        if (i==69-1){
            fout << '-'<<endl;
        }
        else {
            fout << '-';
        }
    }
    fout << setw(69);
    fout << "|    Incomes     |    Expenses    |" << endl;
    for (int i=0;i<69;i++){
        if (i==69-1){
            fout << '-'<<endl;
        }
        else {
            fout << '-';
        }
    }
    fout << "Monthly Income" << setw(55) << "|                |                |"<< endl;
    fout << "Expense on Rent" << setw(54) << "|                |                |"<< endl;
    fout << "Expense on Food" << setw(54) << "|                |                |"<< endl;
    fout << "Expense on Transportation" << setw(44) << "|                |                |"<< endl;
    fout << "Expense on Entertainment" << setw(45) << "|                |                |"<< endl;
    fout << "Expense on Debts/Loans" << setw(47) << "|                |                |"<< endl;
    for (int i=0;i<69;i++){
        if (i==69-1){
            fout << '-'<<endl;
        }
        else {
            fout << '-';
        }
    }
    fout << "Account balance" << setw(54) << "|" <<endl;
    for (int i=0;i<69;i++){
        if (i==69-1){
            fout << '-'<<endl;
        }
        else {
            fout << '-';
        }
    }
    fout << "Total" << setw(64) << "|                |                |"<< endl;
    for (int i=0;i<69;i++){
        if (i==69-1){
            fout << '-'<<endl;
        }
        else {
            fout << '-';
        }
    }
    fout << "Budget of the month" << setw(50) << "                |"<< endl;
    fout << "Budget balance" << setw(55) << "                |"<< endl;
    fout << " " << setw(68) << "|" <<endl;
    fout << "Percentage of rent expense           : XX.XX% " << setw(23) << "|" << endl;
    fout << "Percentage of food expense           : XX.XX% " << setw(23) << "|" << endl;
    fout << "Percentage of transportation expense : XX.XX% " << setw(23) << "|" << endl;
    fout << "Percentage of entertainment expense  : XX.XX% " << setw(23) << "|" << endl;
    fout << "Percentage of debts/loans expense    : XX.XX% " << setw(23) << "|" << endl;
    for (int i=0;i<69;i++){
        if (i==69-1){
            fout << '-'<<endl;
        }
        else {
            fout << '-';
        }
    }
    fout <<" "<<endl;
    fout.close();
    
    return 0;
}
