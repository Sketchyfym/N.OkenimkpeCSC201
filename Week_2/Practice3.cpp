#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    srand(time(0) % 10);
    int number1 = rand() % 10;
    int number2 =  rand() % 10;

    if (number1 < number2) {
        int temp;
        temp = number1;
        number1 = number2;
        number2 = temp;
    }

    int guess1;
    int guess2;

    cout<<"Guess two numbers between 1 and 10"<<endl;
    cout<<"Enter the first:"<<endl;
    cin>>guess1;
    cout<<"Enter the second:"<<endl;
    cin>>guess2;

    if (guess1 == number1 && guess2 == number2) {
        cout<<"Huh you actually got them both...";
    }
    else if (guess1 != number1 && guess2 != number2){
        cout<<"YOU GOT NEITHER YOU FOOL "<<number1<<" and "<<number2<<" YOU FOOL!";
    }
    else {
        cout<<"Wrong the numbers were "<<number1<<" and "<<number2<<" close enough ig.";
        return 1;
    }

return 0;
}