#include <iostream>

using namespace std;

int pin, bal,choice, act, ex, with, depo, userIndex;
bool running = true;

struct Account
{
    int pin;
    int balance;
};



int IntOnly(const string& s)
{   
    act;
    while (true)
    {
        cout << s << endl;
        cin >> act;
        
        if (cin.fail())
        {
            cout << "Invalid input. Number only" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        return act;
    }
}

int main()
{   
    Account users[5];
    users[0] = {1111, 1000};
    users[1] = {2222, 2000};
    users[2] = {3333, 3000};
    users[3] = {4444, 4000};
    users[4] = {5555, 5000};
 
    while (true)
    {   
        cout << endl;
        cout << "Welcome to our bank" << endl;
        cout << endl;
        pin = IntOnly("Enter your PIN");
        userIndex = -1;
  
        for (int i = 0; i < 5; i++)
        {
            if (pin == users[i].pin)
            {
                userIndex = i;
                break;
            }
        }

        if (userIndex == -1)
        {
            cout << "Wrong PIN" << endl;
            continue;
        }

        bal = users[userIndex].balance;
        running = true;

        while (running)
        {   
            cout << endl;
            cout << "Choose from the following options" << endl;
            cout << "1. Withdrawal" << endl;
            cout << "2. Deposit" << endl;
            cout << "3. Balance" << endl;
            cout << "4. Exit" << endl;
            cout << endl;
            cin >> choice;

            if (choice == 1)
            {   
                cout << endl;
                with = IntOnly("Enter the amount you want to withdraw:");
                if (with > bal)
                {   
                    cout << endl;
                    cout << "Insufficient balance" << endl;
                    cout << endl;
                    continue;
                }
                else
                {
                    bal -= with;
                    cout << endl;
                    cout << "You have withdrawn " << with << endl;
                    cout << endl;
                }        
            }

            else if (choice == 2)
            {   
                cout << endl;
                depo = IntOnly("Enter the amount you want to deposit:");
                bal += depo;
                cout << endl;
                cout << "You have deposited " << depo << endl;
                cout << endl;
            }

            else if (choice == 3)
            {   
                cout << endl;
                cout << "Your balance is " << bal << endl;
                cout << endl;
            }

            else if (choice == 4)
            {   
                cout << endl;
                cout << "Are you sure?" << endl;
                cout << "1. Yes" << endl;
                cout << "2. No" << endl;
                cout << endl;
                cin >> ex;
                if (ex == 1)
                {
                    break;
                }
                else if (ex == 2)
                {
                    continue;
                }
            }
        }
    users[userIndex].balance = bal;
    cout << endl;
    cout << "Thank you for banking with us" << endl; 
    break;
    }
}

