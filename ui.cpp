#include <iostream>

using namespace std;

int pass, i,choice, action, ex;

int main()
{
    cout << "Enter your PIN NO: " << endl;
    cin >> pass;

    if (pass == 1234)
    {
        cout << "Choose from the following options" << endl;
        cout << "1. Withdrawal" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Balance" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter the amount you want to withdraw" << endl;
            cin >> i;
            cout << "You have withdrawn " << i << endl;
            cout << "1. End transaction" << endl;
            cout << "2. Go back" << endl;
            cin >> action;
            if (action == 1)
                exit(0);
            else if (action == 2)
            {
                cout << "Choose from the following options" << endl;
                cout << "1. Withdrawal" << endl;
                cout << "2. Deposit" << endl;
                cout << "3. Balance" << endl;
                cout << "4. Exit" << endl;
                cin >> choice;
            }
        }

        else if (choice == 2)
        {
            cout << "Enter the amount you want to deposit" << endl;
            cin >> i;
            cout << "You have deposited " << i << endl;
            cout << "1. End transaction" << endl;
            cout << "2. Go back" << endl;
            cin >> action;
            if (action == 1)
                exit(0);
            else if (action == 2)
            {
                cout << "Choose from the following options" << endl;
                cout << "1. Withdrawal" << endl;
                cout << "2. Deposit" << endl;
                cout << "3. Balance" << endl;
                cout << "4. Exit" << endl;
                cin >> choice;
            }
        }

        else if (choice == 3)
        {
            cout << "Your balance is " << i << endl;
            cout << "1. End transaction" << endl;
            cout << "2. Go back" << endl;
            cin >> action;
            if (action == 1)
                exit(0);
            else if (action == 2)
            {
                cout << "Choose from the following options" << endl;
                cout << "1. Withdrawal" << endl;
                cout << "2. Deposit" << endl;
                cout << "3. Balance" << endl;
                cout << "4. Exit" << endl;
                cin >> choice;
            }
        }

        else if (choice == 4)
        {
            exit(0);
        }
    }
}