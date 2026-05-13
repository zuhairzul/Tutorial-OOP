#include <iostream>
using namespace std;
class BankAccount {
    private:
    double balance;
    public:
    BankAccount(){ balance = 0.0; }
    void Deposit (double amount)
    {
        balance = balance + amount;
        cout << "\n Current balance :" << balance;
    }
    void Withdraw(double amount)
    {
       if (amount > balance) 
        {
            cout << "\n Insufficient funds."; 
        }
        else 
        {
            balance = balance - amount; 
        }
        cout << "\n Current balance: " << balance; 
    }
    double Getbalance()
    {
       return balance;
    }
};
int main ()
{
    BankAccount bb;
    bb.Deposit(1000);
    bb.Withdraw(500);
    bb.Withdraw(600);

    cout << endl;
    return 0;
}