#include <iostream>
using namespace std;

int max(int numbers[], int size) {
    int highest = numbers[0];

    for(int i = 1; i < size; i++){
        if(numbers[i] > highest){
            highest = numbers[i];
        }
    }
    return highest;
}

int min(int numbers[], int size){
    int lowest = numbers[0];

    for(int i = 1; i < size; i++){
        if(numbers[i] < lowest){
            lowest = numbers[i];
        }
    }
    return lowest;
}

int main(){
    int Array[8] = {23, 64, 82, 21, 76, 8, 54, 44};
    int highest = max(Array, 8);
    int lowest = min(Array, 8);

    cout << "The highest number is: " << highest << endl;
    cout << "The lowest number is: " << lowest <<endl;
}
