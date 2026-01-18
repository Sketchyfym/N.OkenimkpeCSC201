#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream infile("data.txt");
    
    if(!infile){
        cout<<"File cannot be opened!";
        return 0;
    }

    int number;
    int sum = 0;

    while(infile >> number){
        cout<<number<<endl;
        sum = sum + number;
    }
    infile.close();

}