# ENGG1340Project -- Topic: Accounting system 
**Group no.: 116**

**Platform: C++**

**Problem Statement:**
       <p>Personal finance problems have never stopped especially since the introduction of online shopping which stimulates over million of impulse buying every day. As a result, personal finance management becomes a lesson for people with different walks of life. It would be great if people can manage their finance records everytime and everywhere efficiently. However, different personal finance apps have the edge over each other (e.g. calendar, memo, photo). It is difficult for users to choose the best finance management tools among them. Therefore, we are going to develop an accounting system which provides the user the most efficient way to manage personal financial status. The program can automatically warn the user if the expenses reach the budget. Using the program, the user is expected to enjoy some basic functions: 
  
      - To add, delete, edit records
      - To view the records according to his/her preference
      - To see his/her own financial reports
      - To be alerted when expenses reach the budget set
      - Password protection 
</p> 
     
**Problem Setting**
       <p>The program is to handle multiple functions on managing financial records. The targeted group of users can be working forces and students with part-time or intern jobs. </p> 
     
  - A) Assumptions
       1. Assumptions on fields listed in "Width" in Data structures
  
  - B) Data structures
       - A) User file (<username>.txt)
            <p> The user file is used to store the information of the user. Every user will have his/her own .txt file to show his/her personal information.</p>
       
        | Field Name | Type              | Width  | Description                                             |
        -----------------------------------------------------------------------------------------------------
        | Name       | String            | 30     | User's name                                             |
        | Password   | Double            | 10     | User's password                                         |
        | Occupation | String            | 30     | User's occupation                                       |
        | Income     | String (2D-Array) | 3(15)  | Income monthly & other sources (Max: XXXXXXXXXXXXX.XX)  |
        | Expense    | String (2D-Array) | 4(50)  | Rents, food, transportation, entertainment, debts/loans |
        | Budget     | Double            | 15     | Budget of the month (Max: XXXXXXXXXXXXX.XX)             |
        | Account    | String (2D-Array) | 3(50)  | Cash, bank card, credit card with account balance       |
        | MDate      | String            | 10     | Date of last modified (dd/mm/yyyy)                      |
        
       - B) Statistical report to user (report_<username>.txt)
        
        | Field Name | Type              | Width  | Description                                             |
        -----------------------------------------------------------------------------------------------------
        | Name       | String            | 30     | User's name                                             |
        | Occupation | String            | 30     | User's occupation                                       |
        | Income     | Double (2D-Array) | 3(15)  | Income monthly & other sources (Max: XXXXXXXXXXXXX.XX)  |
        | Expense    | String (2D-Array) | 5(50)  | Rents, food, transportation, entertainment, debts/loans |
        | Budget     | Double            | 15     | Budget of the month (Max: XXXXXXXXXXXXX.XX)             |
        | Account    | String (Array)    | 3(50)  | Cash, bank card, credit card with account balance       |
        | Date       | String            | 10     | dd/mm/yyyy; Last modified                               |
        | E_Sum      | Double            | 10     | Total expense of the month                              |
        | BE_Diff    | Double            | 10     | Difference between total expense and budget             |
        | Warn       | Boolean           | 1      | True if BE_diff is less than or equal to 0              |
        | Percentage | Double            | 5      | Percentage of area of expenses                          |
        | PDate      | String            | 10     | Date of printing (dd/mm/yyyy)                           |
     
  - C) Ideal outcomes
       <p>The ideal outcomes of the program is to provide the user a clear user manual and report. </p>
     
**Program Features:**
  1) Adding records of income and expenses
  2) Deleting current records
  3) Editing current records
  4) Setting budget
  5) Printing statistical report of user (Allowing to print in detail or in breif format)
  6) Warning for over budget
  - Other possible feature(s):
  7) Combining records of users (family incomes and expenses view)
  8) Password login function
  9) Setting proportions of expenses by the occupation of the user

**Expected files and source codes:**
  1. `<username>`.txt
  2. `report_<username>`.txt
  
**Design**
  - User Manual
     ```
      _____________________________________________________________________________________________
     |                             -Welcome to Accounting System v0.1-                             |
     |---------------------------------------------------------------------------------------------|
     | Please enter your name:                                                                     |
     | Password:                                                                                   |
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
     |  Last modified on: dd/mm/yyyy                                                               |
     |                                                                                             |
     |  Thank you for using the system, bye!                                                       |
     |_____________________________________________________________________________________________|
  
  - Add Function
     ```
      _____________________________________________________________________________________________
     |                                            -Add-                                            |
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
     | New user <username> added!                                                                  |
     |_____________________________________________________________________________________________|
     
  - Delete Function
     ```
      _____________________________________________________________________________________________
     |                                           -Delete-                                          |
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
     | Please enter the format(Breif/Detail) to be printed (B/D):                                  |
     | Confirm (Y/N):                                                                              |
     |                                                                                             |
     | Financial report of <username> printed!                                                     |
     | View report here (Y/N):                                                                     |
     |_____________________________________________________________________________________________|
  
  - Statistical report (In brief format)
     ```
      _____________________________________________________________________________________________
     |                             -Statistical Report of <username>-                              |
     |---------------------------------------------------------------------------------------------|
     | Date of printing: dd/mm/yyyy                                                                |
     |---------------------------------------------------------------------------------------------|
     | Occupation:                                                                                 |
     |_____________________________________________________________________________________________|
     |                                                       |      Incomes     |     Expenses     |
     |---------------------------------------------------------------------------------------------|
     | Monthly Income                                        | XXXXXXXXXXXXX.XX |                  |
     | Expense on Rent                                       |                  | XXXXXXXXXXXXX.XX |
     | Expense on Food                                       |                  | XXXXXXXXXXXXX.XX |
     | Expense on Transportation                             |                  | XXXXXXXXXXXXX.XX |
     | Expense on Entertainment                              |                  | XXXXXXXXXXXXX.XX |
     | Expense on Debts/Loans                                |                  | XXXXXXXXXXXXX.XX |
     |---------------------------------------------------------------------------------------------|
     | Total                                                 | XXXXXXXXXXXXX.XX | XXXXXXXXXXXXX.XX |
     |---------------------------------------------------------------------------------------------|
     | Budget of the month                                                        XXXXXXXXXXXXX.XX |
     | Budget balance                                                             XXXXXXXXXXXXX.XX |
     |                                                                                             |
     | Percentage of rent expense           : XX.XX%                                               |
     | Percentage of food expense           : XX.XX%                                               |
     | Percentage of transportation expense : XX.XX%                                               |
     | Percentage of entertainment expense  : XX.XX%                                               |
     | Percentage of debts/loans expense    : XX.XX%                                               |
     |_____________________________________________________________________________________________|
     
     
