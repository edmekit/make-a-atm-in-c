#include <iostream>

using namespace std;

int pass, i,choice, action, ex, with, depo;
bool running = true;

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
    i = 0;
    pass = 1234;
    while (true)
    {
        int pin = IntOnly("Enter your PIN");
        
        if (pin == pass)
        {
            break;
        }
        else
        {
            cout << "Incorrect PIN. Try again" << endl;
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
                cout << "Enter the amount you want to withdraw" << endl;
                cin >> with;
                i -= with;
                cout << "You have withdrawn " << with << endl;    
            }

            else if (choice == 2)
            {
                cout << "Enter the amount you want to deposit" << endl;
                cin >> depo;
                i += depo;
                cout << "You have deposited " << depo << endl;
            }

            else if (choice == 3)
            {
                cout << "Your balance is " << i << endl;
            }

            else if (choice == 4)
            {
                running = false;
            }
        }
        

        
}
