#include <iostream>
using namespace std;


int main() {cout << "Welcome To Snowflake's ATM!" << endl;
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

} 


