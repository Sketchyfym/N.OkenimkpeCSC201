#include <iostream>
using namespace std;

int main() {
    int age;
    
    cout<<"Enter your age:";
    cin>> age;

    if (age >= 18) {
        cout<<"You're an Adult!";
    }
    else {
        cout<<"You are not an Adult!";
        return 1;
    }

return 0;
}
