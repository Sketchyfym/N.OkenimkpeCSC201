#include <iostream>
using namespace std;

int main()
{
    double farenheit;
    double celsius;

    cout<< "Enter the temerature in Celsius";
    cin>>celsius;
    farenheit = (5.0 / 9.0 * celsius) + 32;
    cout<< farenheit;
    return 0;

}