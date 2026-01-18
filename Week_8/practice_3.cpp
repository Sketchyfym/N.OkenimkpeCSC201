#include <iostream>
using namespace std;

int main()
{
    string s1("Welcome");
    cout<<s1.at(3)<<endl; //returns c
    cout<<s1.erase(2,3)<<endl; //weme
    s1.clear(); //clears
    cout<<s1.empty()<<endl; //returns 1 (true)

    return 0;
}