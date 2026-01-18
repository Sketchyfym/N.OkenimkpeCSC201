#include <iostream>
#include <string>
using namespace std;

//Pin confirmation
bool correctpin(int pin) {
    int enteredpin;
    int attempts = 0;

    while (attempts < 3) {
        cout << "Enter your pin: " << endl;
        cin >> enteredpin;

        if (enteredpin == pin) {
            cout << "Correct pin!" << endl;
            return true;
        } else {
            cout << "Incorrect pin! Try again!" << endl;
        }
        attempts++;
    }
    return false;
}

//ATM UI
void displaymenu(){
    cout<<"======== ATM MENU ========"<<endl;
    cout<<"1. View Balance"<<endl;
    cout<<"2. Deposit Cash"<<endl;
    cout<<"3. Withdraw Cash"<<endl;
    cout<<"4. Reset PIN"<<endl;
    cout<<"5. Exit"<<endl;
}

//Balance
double viewBalance(double balance){
    cout<<"Your current balance is: "<<balance<<endl;
    return balance;
}

//Deposit
double depositMoney(double balance){
    double deposit;
    cout<<"Enter the amount to deposit: "<<endl;
    cin>>deposit;

    while(deposit <= 0){
        cout<<"Invalid amount. Enter again: ";
        cin>>deposit;
    }

    balance = balance + deposit;
    cout<<"Deposit Successful!"<<endl;
    return balance;
}

//Withdraw
double withdrawMoney(double &balance, double &limit){
    double withdraw;
    cout<<"Enter the amount to withdraw: "<<endl;
    cin>>withdraw;

    while (withdraw > balance || withdraw > limit || withdraw <= 0) {
        cout<<"Amount exceeds balance or daily limit. Try again: ";
        cin>>withdraw;
    }

    withdraw = balance - withdraw;
    withdraw = limit - withdraw;

    cout<<"Withdrawal Successful!"<<endl;
    return balance;
}

//Reset PIN
int resetPin(int pin){
    int oldpin, newpin;

    cout<<"Enter old pin: "<<endl;
    cin>>oldpin;

    while(oldpin != pin){
        cout<<"Wrong pin. Try again: "<<endl;
        cin>>oldpin;
    }

    cout<<"Enter new pin: "<<endl;
    cin>>newpin;

    cout<<"PIN reset successful!"<<endl;
    return newpin;
}


int main() {
    double balance = 50000;
    double limit = 20000;
    int pin = 4321;

    //PIN Verification
    bool access = correctpin(pin);

    if (!access) {
        cout << "Account Locked. Please contact your bank!" << endl;
        return 0;
    }

    int choice;

    //ATM Menu Loop
    do {
        displaymenu();
        cout<<"Enter your choice: "<<endl;
        cin>>choice;

        switch(choice){
            case 1:
                balance = viewBalance(balance);
                break;

            case 2:
                balance = depositMoney(balance);
                break;

            case 3:
                withdrawMoney(balance, limit);
                break;

            case 4:
                pin = resetPin(pin);
                break;

            case 5:
                cout<<"Thank you for using our ATM."<<endl;
                break;

            default:
                cout<<"Invalid choice. Try again."<<endl;
        }

    } while(choice != 5);

    return 0;
}
