# ENGG1340Project -- Topic: Accounting system

**Platform: C++**

**Problem Statement:**
  - A) Purpose
       <p>To provide the user a more efficient way to edit and view financial records. The program can automatically warn   the user if the expenses reach the budget. Using the program, the user is expected to enjoy some basic functions: 
  
      - To add, delete, edit records;
      - To view the reocords according to his/her preference;
      - To see his/her own financial reports</p> 
     
  - B) Problem Setting
       <p>The program is to handle multiple functions on managing financial records. </p> 
     
  - C) Assumptions
       1. Assumptions on fields listed in "Width" in Data structures
  
  - D) Data structures
       - A) User file (user.txt)
       
        | Field Name | Type              | Width  | Description                                       |
        ----------------------------------------------------------------------------------------------
        | Name       | String            | 30     | User's name                                      |
        | Income     | Double            | 15     | User's income monthly (Max: XXXXXXXXXXXXX.XX)    |
        | Expense    | String (2D-Array) | 4(50)  | Food, transportation, entertainment, debts/loans |
        | Budget     | Double            | 15     | Budget of the month (Max: XXXXXXXXXXXXX.XX)      |
        | Account    | String (Array)    | 3      | Cash, bank card, credit card                     |
        | MDate      | String            | 10     | Date of last modified (dd/mm/yyyy)               |
        
       - B) Statistical report to user (report.txt)
        
        | Field Name | Type              | Width  | Description                                      |
        ----------------------------------------------------------------------------------------------
        | Name       | String            | 30     | User's name                                      |
        | Income     | Double            | 15     | User's income monthly (Max: XXXXXXXXXXXXX.XX)    |
        | Expense    | String (2D-Array) | 4(50)  | Food, transportation, entertainment, debts/loans |
        | Budget     | Double            | 15     | Budget of the month (Max: XXXXXXXXXXXXX.XX)      |
        | Account    | String (Array)    | 3      | Cash, bank card, credit card                     |
        | Date       | String            | 10     | dd/mm/yyyy; Last modified                        |
        | E_Sum      | Double            | 10     | Total expense of the month                       |
        | BE_Diff    | Double            | 10     | Difference between total expense and budget      |
        | Warn       | Boolean           | 1      | True if BE_diff is less than or equal to 0       |
        | Percentage | Double            | 5      | Percentage of area of expenses                   |
        | PDate      | String            | 10     | Date of printing (dd/mm/yyyy)                    |
     
  - E) Ideal outcomes
     
**Program Features:**
  1) Adding records of income and expenses
  2) Setting budget
  3) Deleting current records
  4) Editing current records
  5) Printing statistical report of user (monthly/ yearly)
  6) Warning for over budget
  - Other possible feature(s):
  7) Combining records of users (family incomes and expenses view)
  8) Login function

**Expected files and source codes:**
  1. user.txt
  2. report.txt

