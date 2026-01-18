#include <iostream>
#include <fstream>

using namespace std;

int main(){
    //ios::out ==> write mode
    //ios::in ==> readmode
    //ios::app ==> append mode
    //ios::trunc ==> erase file before writing
    fstream file("data.txt", ios::out | ios::app);

    file<<"Adding a new line. \n";
    file.close();

    cout<<"Done!\n";

}