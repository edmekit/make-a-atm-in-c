#include <iostream>

using namespace std;

int pass, bal,choice, action, ex, with, depo;
bool running = true;

struct Account
{
    int pin;
    int balance;
};



int IntOnly(const string& s)
{   
    int act;
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
    users[0].pin = 1234;
    users[0].balance = 500;
    users[1].pin = 1000;
    users[1].balance = 10;
    users[2].pin = 2000;
    users[2].balance = 20;
    users[3].pin = 3000;
    users[3].balance = 30;
    users[4].pin = 4000;
    users[4].balance = 40;
 
    while (true)
    {
        int pin = IntOnly("Enter your PIN");
        
        for (int i = 0; i < 5; i++)
        {
            if (pin == users[i].pin)
            {
                bal = users[i].balance;
                break;
            }
            else
            {
                continue;
            }
        }

            while (running == true)
            {
                cout << "Choose from the following options" << endl;
                cout << "1. Withdrawal" << endl;
                cout << "2. Deposit" << endl;
                cout << "3. Balance" << endl;
                cout << "4. Exit" << endl;
                cin >> choice;

                if (choice == 1)
                {
                    with = IntOnly("Enter the amount you want to withdraw:");
                    if (with > bal)
                    {
                        cout << "Insufficient balance" << endl;
                        continue;
                    }
                    else
                    {
                        bal -= with;
                        cout << "You have withdrawn " << with << endl;
                    }
                        
                }

                else if (choice == 2)
                {
                    depo = IntOnly("Enter the amount you want to deposit:");
                    bal += depo;
                    cout << "You have deposited " << depo << endl;
                }

                else if (choice == 3)
                {
                    cout << "Your balance is " << bal << endl;
                }

                else if (choice == 4)
                {
                    running = false;
                }
            }
        }
    }    

