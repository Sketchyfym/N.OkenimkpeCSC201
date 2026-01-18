#include <iostream>
using namespace std;

int main() {
    int year;

    cout<<"\nEnter the zodiac year (0-11) and Ill give you the sign ===> ";
    cin>>year;

    cout<<endl;
    switch (year) {
        case 0:
            cout<<"Rat"<<endl;
            break;
        case 1:
            cout<<"Ox"<<endl;
            break;
        case 2:
            cout<<"Tiger"<<endl;
            break;
        case 3:
            cout<<"Rabbit"<<endl;
            break;
        case 4:
            cout<<"Dragon"<<endl;
            break;
        case 5:
            cout<<"Snake"<<endl;
            break;
        case 6:
            cout<<"Horse"<<endl;
            break;
        case 7:
            cout<<"Goat"<<endl;
            break;
        case 8:
            cout<<"Monkey"<<endl;
            break;
        case 9:
            cout<<"Rooster"<<endl;
            break;
        case 10:
            cout<<"Dog"<<endl;
            break;
        case 11:
            cout<<"Pig"<<endl;
            break;
        default:
            cout<<"invalid input! Please enter a number between 0 and 11."<<endl;
            return 0;
    }
    cout<<"Wrong";
}
/*
int main() {
  string zodiac[] = {
        "Rat", "Ox", "Tiger", "Rabbit", "Dragon", "Snake",
        "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig"
    };

    int year;
    cout << "\nEnter your birth year and i’ll give you the sign ===> ";
    cin >> year;
    
    year = year % 12

    if (year >= 0 && year <= 11) {
        cout << "Your zodiac sign is: " << zodiac[year] << endl;
    } else {
        cout << "Invalid input! Please enter a number between 0 and 11.\n";
    }

    cout << "Wrong";
}
*/