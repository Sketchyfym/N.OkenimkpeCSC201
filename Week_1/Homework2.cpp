#include <iostream>
using namespace std;

int main () 
{
    double number_1 = 10;
    double number_2 = 20;
    double temp;

    cout<<"The two numbers are " <<number_1 << " and " <<number_2 <<endl;
    temp = number_1;
    number_1 = number_2;
    number_2 = temp;
    cout<<"The two numbers are now " <<number_1 << " and " <<number_2 <<endl;
}