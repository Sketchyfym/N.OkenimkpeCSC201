#include <iostream>
using namespace std;

int main()
{
    string s1("Welcome");
    cout<<s1.length()<<endl;
    cout<<s1.size()<<endl;
    cout<<s1.capacity()<<endl<<endl;

    s1.erase(1,2);
    cout<<"New value of the string."<<s1<<endl;
    cout<<s1.length()<<endl;
    cout<<s1.size()<<endl;
    cout<<s1.size()<<endl;

    return 0;
}