#include <iostream>
using namespace std;


/*int main() {cout << "Welcome To Snowflake's ATM!" << endl;
    double balance = 1000.00;
cout << "Your balance is: " << balance <<endl;

    double withdrawalAmount;
cout << "How much do you want to withdraw"<<endl;
cin >> withdrawalAmount;
if (withdrawalAmount > balance)
{
   cout << "Insufficient funds"<<endl;
}
else if (withdrawalAmount < 0)
{
cout << "Invalid withdrawal Amount" <<endl;
}
else
{
    balance = balance - withdrawalAmount;
    cout <<"Balance is: "<< balance << endl;
    cout << "Withdrawal Successful"<<endl;
}


double depositAmount;
cout << "How much do you want to deposit "<<endl;
cin >>depositAmount;
if (depositAmount < 0)
{
    cout << "Invalid Deposit Amount" << endl;
} else {
    balance = balance + depositAmount;
    cout << "Your balance is "<< balance << endl;
}


return 0;

}*/

int main() {
    double balance = 1000.00;
    bool running = true;

    while (running) {
        cout << "\n--- Snowflakes ATM ---" << endl;
        cout << "1. Check Balance" << endl;
        cout << "Enter your choice: " << endl;

        int choice;

    cin >> choice;

    if (choice == 1) {
        cout << "Your balance is: " << balance << endl;
    } else if ( choice == 2) {
        cout << " Thank you for using Snowflake's ATM. Goodbye!" << endl;
        running == false;
    }
    else {
        cout << " Invalid choice. Please try again."<< endl;
         }
    }
    return 0;
}


