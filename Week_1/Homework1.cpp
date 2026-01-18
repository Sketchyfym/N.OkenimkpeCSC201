#include <iostream>
using namespace std;

int multiply (double number_1, double number_2)
{
 return number_1*number_2;
}

int add (double number_1, double number_2)
{
 return number_1+number_2;
}

int subtract (double number_1, double number_2)
{
 return number_1-number_2;
}

int main() 
{
    double number_1;
    double number_2;
    double product;
    double sum;
    double difference;

    cout<<"Enter the first number: ";
    cin>>number_1;
    cout<<"Enter the second number: ";
    cin>>number_2;
    
    product = multiply(number_1, number_2);
    cout<<"Product is: " <<product <<endl;

    sum = add(number_1, number_2);
    cout<<"The sum is: " <<sum <<endl;

    difference = subtract(number_1, number_2);
    cout<<"The difference is: " <<difference <<endl;

}


