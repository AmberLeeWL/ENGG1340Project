//Print report function

#include "src.h"

using namespace std;

int print_main(userinfo user){
    char choice;
    ofstream fout;
    string pdate = "";
    char s[19];
    char file[255];
    sprintf(file, "%s.txt", user.Name);
    fout.open(file);
    fout << setw(40) << "-Statistic Report of " << user.Name << endl;
    
    for (int i=0;i<stdwidth;i++){
        if (i==stdwidth-1){
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
        pdate = pdate+s[i];
    }
    fout << pdate << setw(32) << "|" <<endl;
    for (int i=0;i<stdwidth;i++){
        if (i==stdwidth-1){
            fout << '-'<<endl;
        }
        else {
            fout << '-';
        }
    }
    fout << "Occupation: " << "<user.Occupation>" << setw(40) << "|"<< endl;
    for (int i=0;i<stdwidth;i++){
        if (i==stdwidth-1){
            fout << '-'<<endl;
        }
        else {
            fout << '-';
        }
    }
    fout << setw(69);
    fout << "|    Assets     |    Liabilities    |" << endl;
    for (int i=0;i<stdwidth;i++){
        if (i==stdwidth-1){
            fout << '-'<<endl;
        }
        else {
            fout << '-';
        }
    }
    fout << "Monthly Income" << setw(55) << "|"<< setprecision(2) << user.Income <<"|                |"<< endl;
    fout << "Expense on Rent" << setw(54) << "|                |"<< setprecision(2) << user.Expense[0]<<"|"<< endl;
    fout << "Expense on Food" << setw(54) << "|                |"<< setprecision(2) << user.Expense[1]<<"|"<< endl;
    fout << "Expense on Transportation" << setw(44) << "|                |"<< setprecision(2) << user.Expense[2]<<"|"<< endl;
    fout << "Expense on Entertainment" << setw(45) << "|                |"<< setprecision(2) << user.Expense[3]<< "|"<< endl;
    fout << "Expense on Debts/Loans" << setw(47) << "|                |"<< setprecision(2) << user.Expense[4]<<"|"<< endl;
    for (int i=0;i<stdwidth;i++){
        if (i==stdwidth-1){
            fout << '-'<<endl;
        }
        else {
            fout << '-';
        }
    }
    fout << "Account balances:" << setw(53) << "|" <<endl;
    fout << "Cash in hand" << "|" << setprecision(2) << user.Account[0] << "|" << endl;
    fout << "Balance of bank card" << "|" << setprecision(2) << user.Account[1] << "|" << endl;
    fout << "Balance of credit card" << "|" << setprecision(2) << user.Account[2] << "|" << endl;
    for (int i=0;i<stdwidth;i++){
        if (i==stdwidth-1){
            fout << '-'<<endl;
        }
        else {
            fout << '-';
        }
    }
    double itotal = user.Income + user.Account[0] + user.Account[1] + user.Account[2];
    double etotal = user.Expense[0] + user.Expense[1] + user.Expense[2] + user.Expense[3] + user.Expense[4];
    fout << "Total" << setw(64) << "|" << setprecision(2) << itotal << "|" << setprecision(2) << etotal << "|"<< endl;
    for (int i=0;i<stdwidth;i++){
        if (i==stdwidth-1){
            fout << '-'<<endl;
        }
        else {
            fout << '-';
        }
    }
    fout << "Budget of the month" << setw(50) << setprecision(2) << user.Budget << "|"<< endl;
    fout << "Budget balance" << setw(55) << setprecision(2) << user.Budget-etotal << "|"<< endl;
    fout << " " << setw(68) << "|" <<endl;
    fout << "Percentage of expenses to monthly:" << endl;
    fout << "Percentage of rent expense           : " << setprecision(2) << (user.Expense[0]/user.Income)*100 << "%" << setw(23) << "|" << endl;
    fout << "Percentage of food expense           : " << setprecision(2) << (user.Expense[1]/user.Income)*100 << "%" << setw(23) << "|" << endl;
    fout << "Percentage of transportation expense : " << setprecision(2) << (user.Expense[2]/user.Income)*100 << "%" << setw(23) << "|" << endl;
    fout << "Percentage of entertainment expense  : " << setprecision(2) << (user.Expense[3]/user.Income)*100 << "%" << setw(23) << "|" << endl;
    fout << "Percentage of debts/loans expense    : " << setprecision(2) << (user.Expense[4]/user.Income)*100 << "%" << setw(23) << "|" << endl;
    for (int i=0;i<stdwidth;i++){
        if (i==stdwidth-1){
            fout << '-'<<endl;
        }
        else {
            fout << '-';
        }
    }
    fout <<" "<<endl;
    fout.close();
    cout << "Financial report of "<< user.Name <<" printed!" << endl;
    cout << "View report here(Y/N): ";
    cin >> choice;
    if (choice == 'Y' || choice == 'y'){
        cout << setw(40) << "-Statistic Report of " << user.Name << endl;
        printbreak();
        cout << "Date of printing: ";
        time_t t = time(0);
        strftime(s, 19, "%X %d/%m/%Y", localtime(&t));
        for (int i=0;i<19;i++){
            pdate = pdate+s[i];
        }
        cout << pdate << setw(32) << "|" <<endl;
        printbreak();
        cout << "Occupation: " << "<user.Occupation>" << setw(40) << "|"<< endl;
        printbreak();
        cout << setw(69);
        cout << "|    Assets     |    Liabilities    |" << endl;
        printbreak();
        cout << "Monthly Income" << setw(55) << "|"<< setprecision(2) << user.Income <<"|                |"<< endl;
        cout << "Expense on Rent" << setw(54) << "|                |"<< setprecision(2) << user.Expense[0]<<"|"<< endl;
        cout << "Expense on Food" << setw(54) << "|                |"<< setprecision(2) << user.Expense[1]<<"|"<< endl;
        cout << "Expense on Transportation" << setw(44) << "|                |"<< setprecision(2) << user.Expense[2]<<"|"<< endl;
        cout << "Expense on Entertainment" << setw(45) << "|                |"<< setprecision(2) << user.Expense[3]<< "|"<< endl;
        cout << "Expense on Debts/Loans" << setw(47) << "|                |"<< setprecision(2) << user.Expense[4]<<"|"<< endl;
        printbreak();
        cout << "Account balances:" << setw(53) <<"|" <<endl;
        cout << "Cash in hand" << "|" << setprecision(2) << user.Account[0] << "|" << endl;
        cout << "Balance of bank card" << "|" << setprecision(2) << user.Account[1] << "|" << endl;
        cout << "Balance of credit card" << "|" << setprecision(2) << user.Account[2] << "|" << endl;
        printbreak();
        cout << "Total" << setw(64) << "|" << setprecision(2) << itotal << "|" << setprecision(2) << etotal << "|"<< endl;
        printbreak();
        cout << "Budget of the month" << setw(50) << user.Budget << "|"<< endl;
        cout << "Budget balance" << setw(55) << user.Budget-etotal << "|"<< endl;
        cout << " " << setw(68) << "|" <<endl;
        cout << "Percentage of expenses to monthly:" << endl;
        cout << "Percentage of rent expense           : " << setprecision(2) << (user.Expense[0]/user.Income)*100 << "%" << setw(23) << "|" << endl;
        cout << "Percentage of food expense           : " << setprecision(2) << (user.Expense[1]/user.Income)*100 << "%" << setw(23) << "|" << endl;
        cout << "Percentage of transportation expense : " << setprecision(2) << (user.Expense[2]/user.Income)*100 << "%" << setw(23) << "|" << endl;
        cout << "Percentage of entertainment expense  : " << setprecision(2) << (user.Expense[3]/user.Income)*100 << "%" << setw(23) << "|" << endl;
        cout << "Percentage of debts/loans expense    : " << setprecision(2) << (user.Expense[4]/user.Income)*100 << "%" << setw(23) << "|" << endl;
        printbreak();
    }
    
    return 0;
}
