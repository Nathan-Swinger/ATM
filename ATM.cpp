#include <iostream>

using namespace std;

void displayMenu();

int main()
{
    int choice, withdraw, deposit;
    int balance = 0;
    cout << "Welcome to the ATM!" << endl;
    displayMenu();
    cin >> choice;
    while(choice >= 1 && choice < 4)
    {
        switch(choice)
        {
        case 1:
            cout << "Balance: " << balance << endl;
            displayMenu();
            cout << "Select next menu choice: ";
            cin >> choice;
            break;
        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> withdraw;
            if(withdraw > balance)
            {
                cout << "Insufficient funds!" << " Your balance is: " << balance << " " << endl;
            }
            else
            {
                cout << "You withdrew: " << withdraw << endl;
                cout << "Your new balance is: " << balance - withdraw << endl;
                balance = balance - withdraw;
                displayMenu();
                cout << "Select next menu choice: ";
                cin >> choice;
            }
            break;
        case 3:
            cout << "Enter amount to deposit: ";
            cin >> deposit;
            if(deposit <= 0)
            {
                cout << "You cannot deposit no money!" << endl;
                cout << "Enter amount to deposit: ";
                cin >> deposit;
            }
            else
            {
                cout << "You deposited: " << deposit << endl;
                cout << "Your new balance is: " << balance + deposit << endl;
                balance = balance + deposit;
                displayMenu();
                cout << "Select next menu choice: ";
                cin >> choice;
            }
            break;

    }
    }
    cout << "The program is now closing...";
    return 0;
}

void displayMenu(){
    cout << "\n1. Balance" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. Deposit" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice from the list above: ";
}
