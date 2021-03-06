//Delete record function

#include "src.h"

using namespace std;

int Delete(string userfilename,string userinfoname){
  ifstream fin;
  
  cout << setw(42);
  cout << "-Delete Record-" << endl;
  fin.open(userfilename);
  if ( fin.fail() ){
    cout << userfilename << " does not exist" << endl;
    exit(1);
  }
  fin.open(userinfofilename);
  if ( fin.fail() ){
    cout <<  userinfofilename << " does not exist" << endl;
    exit(1);
  }
  else{
    printbreak();
      char choice, username;
      cout << "Please enter the username going to be deleted: ";
      cin >> username;
      cout << "Confirm (Y/N): " ;
      cin >> choice;
      if (choice == 'Y' || choice == 'y'){
         remove(userfilename);
         remove(userinfofilename);
         cout << "User <username> deleted! \n";
      }
      else{
        cout << "User <username> has not been deleted! \n";
      }
  }
  return 0;
}
