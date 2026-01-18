#include <iostream>
using namespace std;

int main()
{
    string s1("Welcome to HTML");
    cout<<s1.find('o')<<endl;
    cout<<s1.find('o',6)<<endl;
    cout<<s1.find("co")<<endl;
    cout<<s1.find("co", 6)<<endl;

    s1.insert(11, "C++ and ");
    cout<<s1<<endl;
    string s2("AA");
    s2.insert(1, 4, 'B');
    cout<< s2 <<endl;
    string s3("Welcome to HTML");
    s3.replace(11, 4, "C++");
    cout<<s3<<endl;

    return 0;
}