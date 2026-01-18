#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>   // for fixed and setprecision
using namespace std;

int main() {
    // Variables
    string name;
    double jamb, waec;
    double age, tuition = 1500000, fee = 0;
    bool choice, discipline;
    int hostel;  
    double admit;

    // Name
    cout << "Enter your name: " << endl;
    cin >> name;

    // JAMB
    cout << "Enter your JAMB score: " << endl;
    cin >> jamb;
    while (jamb > 400 || jamb < 0) {
        cout << "Invalid. Enter a real JAMB score: " << endl;
        cin >> jamb;
    }

    // WAEC
    cout << "Enter your WAEC average: " << endl;
    cin >> waec;
    while (waec > 100 || waec < 0) {
        cout << "Invalid. Enter a real WAEC score: " << endl;
        cin >> waec;
    }

    // Age
    cout << "Enter your age: " << endl;
    cin >> age;

    // First choice
    cout << "Is PAU your first choice (1 for yes and 0 for no): " << endl;
    cin >> choice;
    while (choice > 1 || choice < 0) {
        cout << "Invalid. 1 for yes 0 for no: " << endl;
        cin >> choice;
    }

    // Disciplinary record
    cout << "Do you have a disciplinary record (1 for yes and 0 for no): " << endl;
    cin >> discipline;
    while (discipline > 1 || discipline < 0) {
        cout << "Invalid. 1 for yes and 0 for no: " << endl;
        cin >> discipline;
    }

    // Hostel preference
    cout << "Enter your hostel preference (1 Main, 2 Annex, 3 Day): " << endl;
    cin >> hostel;
    while (hostel > 3 || hostel < 1) {
        cout << "Invalid. 1 Main, 2 Annex, 3 Day: " << endl;
        cin >> hostel;
    }

    // Admission Decision
    string status;
    if (jamb >= 220 && waec >= 60 && choice == true) {
        status = "Admitted";
        admit = 1;
    }
    else if (jamb >= 200 && waec >= 70 && choice == false) {
        status = "Admitted";
        admit = 1;
    }
    else if (discipline == true || age < 15) {
        status = "Rejected";
        admit = 2;
    }
    else {
        status = "Pending";
        admit = 3;
    }

    // Scholarship (as discount now)
    double scholarship = 0.0;  // 0% discount by default
    if (jamb >= 320){
        scholarship = 0.30;
    }
    else if (jamb >= 280){
        scholarship = 0.20;
    }
    else if (jamb >= 240){
        scholarship = 0.10;
    }
    if (waec >= 80 && choice == true) {
        scholarship += 0.05; 
        if (scholarship > 0.35){
            scholarship = 0.35;
        }
    }

    // Hostels
    string hosteltype;
    if (admit == 3){
        hostel = 4;
    }
    else if (admit == 2){
        hostel = 5;
    }
    switch (hostel) {
        case 1: 
            hosteltype = "Main hostel"; 
            fee = 180000; 
            break;
        case 2: 
            hosteltype = "Annex";      
            fee = 120000; 
            break;
        case 3: 
            hosteltype = "Day Student"; 
            fee = 0; 
            break;
        case 4: 
            hosteltype = "On Hold";    
            fee = 0; 
            break;
        case 5:    
            hosteltype = "Not Applicable"; 
            fee = 0; 
            break;
    }

    // Merit grant (prime number check) – keep your code
    srand(time(0));
    int r = (rand() % 100) + 1;

    bool isprime = true;

    if(r == 2 || r == 3 || r == 5 || r == 7 || r == 11 || r == 13 ||
        r == 17 || r == 19 || r == 23 || r == 29 || r == 31 || r == 37 ||
        r == 41 || r == 43 || r == 47 || r == 53 || r == 59 || r == 61 ||
        r == 67 || r == 71 || r == 73 || r == 79 || r == 83 || r == 89 || r == 97){
            bool isprime = true;
    }
    else{
        isprime = false;
    }   
    double grant = 0;
    if (isprime = true){  
        grant = 50000;
    }

    // Totals
    double totaltuition = tuition * (1 - scholarship);
    double payable = totaltuition + fee - grant;
    if (payable < 0){
        payable = 0; 
    }
    // Output
    cout << fixed << setprecision(2); // print normally instead of scientific notation
    cout << "\n---------------------------\n";
    cout << "Name: " << name << endl;
    cout << "Admission Status: " << status << endl;
    cout << "Scholarship: " << scholarship * 100 << "%" << endl;
    cout << "Tuition After Scholarship: #" << totaltuition << endl;
    cout << "Hostel: " << hosteltype << endl;
    cout << "Fee: #" << fee << endl;
    cout << "Random draw: " << r << endl;
    cout << "Merit Grant: #" << grant << endl;
    cout << "TOTAL PAYABLE: #" << payable << endl;
}
