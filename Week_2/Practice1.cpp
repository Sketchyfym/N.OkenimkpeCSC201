#include <iostream>
using namespace std;

int main() {
    int number;
    
    cout<<"Enter the number:";
    cin>> number;

    if (number % 5 == 0) {
        cout<<"HiFive!";
    }
    else if (number % 2 == 0) {
        cout<<"HiEven!";
    }
    else {
        cout<<"Wrong";
        return 1;
    }

return 0;
}