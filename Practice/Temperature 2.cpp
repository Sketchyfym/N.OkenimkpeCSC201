#include <iostream>
using namespace std;

int main()
{
    double farenheit;
    double celsius;

    cout<< "Enter the temerature in Farenheit";
    cin>>farenheit;
    celsius = (5.0 / 9.0 * farenheit) - 32;
    cout<< celsius;
    return 0;
}