Bank Transactions Application
Overview:
This program simulates a basic banking application where users can perform various transactions such as withdrawing money, depositing money, paying bills, and making transfers.

Features:
Withdraw Money:

Users can withdraw money from their account.
If the account balance is sufficient, the transaction is processed successfully.
Otherwise, an error message is displayed indicating insufficient funds.
Deposit Money:

Users can deposit money into their account.
The deposited amount is added to the account balance.
The transaction is processed successfully.
Pay Bill:

Users can pay bills such as electricity, water, natural gas, or phone bills.
Users select the type of bill they want to pay and enter their account number.
If the account balance is sufficient, the bill payment is processed successfully.
Otherwise, an error message is displayed indicating insufficient funds.
Transfer:

Users can transfer money to another account.
Users enter the recipient's IBAN (International Bank Account Number) and the amount to transfer.
If the account balance is sufficient, the transfer is processed successfully.
Otherwise, an error message is displayed indicating insufficient funds.
Implementation:
The program is implemented in C programming language.
It utilizes basic input/output functions for user interaction.
Random number generation is used to simulate bill amounts and initial account balances.
Error handling is implemented to handle invalid user inputs and insufficient funds scenarios.
Usage:
Upon running the program, users are presented with a menu of banking options.
Users select the desired transaction by entering the corresponding option number.
Users input necessary information such as withdrawal/deposit amounts, bill types, or recipient's IBAN.
The program processes the transaction and displays appropriate messages indicating the outcome.
Users can perform multiple transactions sequentially or exit the program when finished.
Note:
This application is a simple simulation for educational purposes and does not interact with real banking systems or accounts.
It serves as a demonstration of basic programming concepts such as conditional statements, loops, functions, and user input/output in C.
