//  File Handling in c++
#include <iostream>
#include <fstream>
using namespace std;

int main(){
//    ofstream ==> Rrite to a file (output)
//    ifstream ==> Read from a file (input)
//    fstream ==> Read and Write
/*    ofstream outfile("data.txt");

    if(!outfile){
        cout<<"Error opening file or something";
        return 0;
    }

    outfile <<"Welcome to C++\n";
    outfile <<"This is file handling class\n"; 

    outfile.close(); */

    ifstream infile("data.txt");
    if(!infile){
        cout<<"Cannot open file";
        return 0;
    }
    string line;

    while(getline(infile, line)){
        cout<<line<<"\n";
    }
    infile.close(); 
}