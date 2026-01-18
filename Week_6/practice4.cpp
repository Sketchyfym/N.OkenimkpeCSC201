#include <iostream>
using namespace std;

void edit(int number, int numbers[]){
    number = 1001;
    numbers[0] = 5555; 
}

int main(){
    int x = 1;
    int y[4] = {23, 13, 44, 77};
    y[0] = x;
    edit(x, y);
    cout << "x is " << x << endl;
    cout << "y[0] is " << y[0] << endl;
    return 0;
}
