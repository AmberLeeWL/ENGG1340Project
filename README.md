# ENGG1340Project -- Topic: Accounting system 
**Group no.: 116**

**Platform: C++**

**Problem Statement:**
       <p>Personal finance problems have never stopped especially since the introduction of online shopping which stimulates over million of impulse buying every day. As a result, personal finance management becomes a lesson for people with different walks of life. It would be great if people can manage their finance records everytime and everywhere efficiently. However, different personal finance apps have the edge over each other (e.g. calendar, memo, photo). It is difficult for users to choose the best finance management tools among them. Therefore, we are going to develop an accounting system which provides the user the most efficient way to manage personal financial status. The program can automatically warn the user if the expenses reach the budget. Using the program, the user is expected to enjoy some basic functions: 
  
      - To add, delete, edit records
      - To view the records in both the program or in text file
      - To see his/her own financial reports
      - Password protection 
</p> 
     
**Problem Setting**
       <p>The program is to handle multiple functions on managing financial records. The targeted group of users can be working forces and students with part-time or intern jobs. </p> 
     
  - A) Assumptions
       1. Assumptions on fields listed in "Width" in Data structures
  
  - B) Data structures
       - A) User file (User.txt)
            <p> The user file is used to store the usernames and passwords of the users. </p>
            
        | Field Name | Type              | Width  | Description                                             |
        -----------------------------------------------------------------------------------------------------
        | Name       | string            | 30     | User's name                                             |
        | Password   | string            | 10     | User's password                                         |

       - B) User information file (UserInfo.txt)
            <p> The user information file is used to store the information of all the users. </p>
       
        | Field Name | Type              | Width  | Description                                             |
        -----------------------------------------------------------------------------------------------------
        | Name       | String            | 30     | User's name                                             |
        | Password   | String            | 15     | User's password                                         |
        | Occupation | String            | 30     | User's occupation                                       |
        | Income     | Double (Array)    | 3      | Income monthly(Max: XXXXXXXXXXXXX.XX)                   |
        | Expense    | Double (Array)    | 5      | Rents, food, transportation, entertainment, debts/loans |
        | Budget     | Double            | 15     | Budget of the month (Max: XXXXXXXXXXXXX.XX)             |
        | Account    | Double (Array)    | 3      | Cash, bank card, credit card with account balance       |
        | MDate      | String            | 10     | Date of last modified (ss:mm:hh dd/mm/yyyy)             |
        
       - C) Statistical report to user (report_<username>.txt)
        
        | Field Name | Type              | Width  | Description                                             |
        -----------------------------------------------------------------------------------------------------
        | Name       | String            | 30     | User's name                                             |
        | Occupation | String            | 30     | User's occupation                                       |
        | Income     | Double            | 15     | Income monthly(Max: XXXXXXXXXXXXX.XX)                   |
        | Expense    | Double (Array)    | 5      | Rents, food, transportation, entertainment, debts/loans |
        | Budget     | Double            | 15     | Budget of the month (Max: XXXXXXXXXXXXX.XX)             |
        | Account    | String (Array)    | 3      | Cash, bank card, credit card with account balance       |
        | Date       | String            | 10     | ss:mm:hh dd/mm/yyyy; Last modified                      |
        | etotal     | Double            | 10     | Total liabilities of the month                          |
        | itotal     | Double            | 10     | Total assets of the month                               |
        | pdate      | String            | 10     | Date of printing (ss:mm:hh dd/mm/yyyy)                  |
     
  - C) Ideal outcomes
       <p>The ideal outcomes of the program is to provide the user a clear user manual and report. </p>
     
**Program Features:**
  1) Adding records of income and expenses
  2) Deleting current records
  3) Editing current records
  4) Setting budget
  5) Printing statistical report of user
  - Other possible feature(s):
  6) Password login function

**Expected files and source codes:**
  1. User.txt
  2. UserInfo.txt
  3. `report_<username>`.txt
  4. SystemLog.txt (To store the every login's time and user)
  
**Design**
  - User Manual
     ```
      _____________________________________________________________________________________________
     |                             -Welcome to Accounting System v0.1-                             |
     |Last modified on: ss:mm:hh dd/mm/yyyy (<username>)                                           |
     |---------------------------------------------------------------------------------------------|
     | Please enter your name    :                                                                 |
     | Please enter your password:                                                                 |
     |---------------------------------------------------------------------------------------------|
     | Hello, <username> !                                                                         |
     |                                                                                             |
     | Functions availble:                                                                         |
     | 1. Add record                    2. Delete record                    3. Edit record         |
     | 4. Print report                  5.                                                         |
     |                                                                                             |
     | Please choose the functions(1-7):                                                           |
     |  .                                                                                          |
     |  .                                                                                          |
     |  .                                                                                          |
     |  Last modified on: ss:mm:hh dd/mm/yyyy                                                      |
     |                                                                                             |
     |  Thank you for using the system, bye!                                                       |
     |_____________________________________________________________________________________________|
  
  - Add Function
     ```
      _____________________________________________________________________________________________
     |                                     -Add Record-                                            |
     |---------------------------------------------------------------------------------------------|
     | Please enter new username             :                                                     |
     | Please enter occupation               :                                                     |
     | Please enter monthly income           :                                                     |
     | Please enter expense on rent          :                                                     |
     | Please enter expense on food          :                                                     |
     | Please enter expense on transportation:                                                     |
     | Please enter expense on entertainment :                                                     |
     | Please enter expense on debts/loans   :                                                     |
     | Please enter budget                   :                                                     |
     | Please enter amount of cash in hand   :                                                     |
     | Please enter balance of bank card     :                                                     |
     | Please enter blance of credit card    :                                                     |
     |                                                                                             |
     | Please confirm your information(Y/N)  :                                                     |
     |                                                                                             |
     | New user <username> added!                                                                  |
     |_____________________________________________________________________________________________|
     
  - Delete Function
     ```
      _____________________________________________________________________________________________
     |                                    -Delete Record-                                          |
     |---------------------------------------------------------------------------------------------|
     | Please enter the username going to be deleted:                                              |
     | Confirm (Y/N):                                                                              |
     |                                                                                             |
     | User <username> deleted!                                                                    |
     |_____________________________________________________________________________________________|
     
  - Edit Function
     ```
      _____________________________________________________________________________________________
     |                                            -Edit-                                           |
     |---------------------------------------------------------------------------------------------|
     | Please enter the username:                                                                  |
     | Confirm (Y/N):                                                                              |
     |---------------------------------------------------------------------------------------------|
     | Username                 :                                                                  |
     | Occupation               :                                                                  |
     | Monthly income           :                                                                  |
     | Expense on rent          :                                                                  |
     | Expense on food          :                                                                  |
     | Expense on transportation:                                                                  |
     | Expense on entertainment :                                                                  |
     | Expense on debts/loans   :                                                                  |
     | Budget                   :                                                                  |
     | Amount of cash in hand   :                                                                  |
     | Balance of bank card     :                                                                  |
     | Balance of credit card   :                                                                  |
     |---------------------------------------------------------------------------------------------|
     | 1. Username                    2. Occupation                   3. Monthly income            |
     | 4. Expense on rent             5. Expense on food              6. Expense on transportation |
     | 7. Expense on entertainment    8. Expense on debts/loans       9. Budget                    |
     | 10.Amount of cash in hand      11. Balance of bank card        12. Balance of credit card   |
     |                                                                                             |
     | Please choose what to be edited (1-12):                                                     |
     |  .                                                                                          |
     |  .                                                                                          |
     |  .                                                                                          |
     |  User <username> edited!                                                                    |
     |_____________________________________________________________________________________________|
     
  - Print Function
     ```
      _____________________________________________________________________________________________
     |                                           -Print-                                           |
     |---------------------------------------------------------------------------------------------|
     | Financial report of <username> printed!                                                     |
     | View report here (Y/N):                                                                     |
     |_____________________________________________________________________________________________|
  
  - Statistical report
     ```
      _____________________________________________________________________________________________
     |                             -Statistical Report of <username>-                              |
     |---------------------------------------------------------------------------------------------|
     | Date of printing: ss:mm:hh dd/mm/yyyy                                                       |
     |---------------------------------------------------------------------------------------------|
     | Occupation:                                                                                 |
     |_____________________________________________________________________________________________|
     |                                                       |      Assets      |   Liabilities    |
     |---------------------------------------------------------------------------------------------|
     | Monthly Income                                        | XXXXXXXXXXXXX.XX |                  |
     | Expense on Rent                                       |                  | XXXXXXXXXXXXX.XX |
     | Expense on Food                                       |                  | XXXXXXXXXXXXX.XX |
     | Expense on Transportation                             |                  | XXXXXXXXXXXXX.XX |
     | Expense on Entertainment                              |                  | XXXXXXXXXXXXX.XX |
     | Expense on Debts/Loans                                |                  | XXXXXXXXXXXXX.XX |
     |---------------------------------------------------------------------------------------------|
     | Account balances:                                                                           |
     | Cash in hand                                          | XXXXXXXXXXXXX.XX |                  |
     | Balance of bank card                                  | XXXXXXXXXXXXX.XX |                  |
     | Balance of credit card                                | XXXXXXXXXXXXX.XX |                  |
     |---------------------------------------------------------------------------------------------|
     | Total                                                 | XXXXXXXXXXXXX.XX | XXXXXXXXXXXXX.XX |
     |---------------------------------------------------------------------------------------------|
     | Budget of the month                                                        XXXXXXXXXXXXX.XX |
     | Budget balance                                                             XXXXXXXXXXXXX.XX |
     |                                                                                             |
     | Percentage of expenses to income:                                                           |
     | Percentage of rent expense           : XX.XX%                                               |
     | Percentage of food expense           : XX.XX%                                               |
     | Percentage of transportation expense : XX.XX%                                               |
     | Percentage of entertainment expense  : XX.XX%                                               |
     | Percentage of debts/loans expense    : XX.XX%                                               |
     |_____________________________________________________________________________________________|
     
     
