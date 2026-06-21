#include <iostream>
using namespace std;


int main() {cout << "Welcome To Snowflake's ATM!" << endl;
    double balance = 1000.00;
cout << "Your balance is: " << balance <<endl;

    double withdrawalAmount;
cout << "How much do you want to withdraw"<<endl;
cin >> withdrawalAmount;
if (withdrawalAmount > balance || withdrawalAmount < 0)
{
   cout << "Insufficient funds"<<endl;
   balance = balance;
   cout << "Balance is: "<< balance <<endl;
}
else
{
    balance = balance - withdrawalAmount;
    cout <<"Balance is: "<< balance << endl;
    cout << "Withdrawal Successful"<<endl;
}


return 0;

} 


