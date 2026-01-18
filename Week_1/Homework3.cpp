#include <iostream>
using namespace std;

int tax (double amount, double rate)
{
    return amount * rate;
}

int main ()
{
    double amount;
    double rate = 0.06;
    double total;

    cout<<"Enter the total amount:";
    cin>>amount;
    total = tax(amount, rate);
    cout<<"The total tax is: " << total;
}
