#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
//Libraries
int main() {
    string name; //Student name viarable
    bool isPauStudent; //student staus variable
    int course, location; //Varaible for course and location

    cout<<"Enter Full Name ===> "; //Enter students name
    getline(cin, name);

    cout<<"Is Pau student? (1 for true, 0 for false)"; //Check if student
    int flag;
    cin>> flag;
    isPauStudent = (flag != 0);

    cout<<"Enter course(1-5): \n"<< "1--Photography \n"<< "2--Painting  \n" //Pick course
        << "3--Fish farming \n" << "4--Baking \n"
        << "5--frying \n";
    cin>>course;

    cout<<"Enter location(1-5): \n"<< "1-- Camp house A \n"<< "2-- Camp house B \n" //Pick location
        << "3-- Camp house C \n"<< "4-- Camp house D \n"
        << "5-- Camp house E \n";
    cin>>location;

//_______________________Part two of the algorithm : map choice_____________________________
    string coursename;
    int days = 0;
    double regFee =0.0;

    if(course ==1){ //Courses... duration and prices.
        coursename = "Photography";
        days = 3;
        regFee = 10000;
    }
    else if(course==2){
        coursename = "Painting";
        days = 5;
        regFee = 8000;
    }
    else if(course==3){
        coursename = "Fish Farming";
        days = 7;
        regFee = 18000;
    }
    else if(course==4){
        coursename = "Baking";
        days = 5;
        regFee = 13000;
    }
    else if(course==5){
        coursename = "Public Speaking";
        days = 2;
        regFee = 5000;
    }
    else{
        cout<<"Invalid course selection (Nigga)"<<endl;
        return 1;
    }
    
    // location code
    string LocName;
    double LogigingPerDay = 0.0; //Location name and price

    
    if(location ==1){ //location and prices.
        LocName = "Camp house A";
        LogigingPerDay = 10000;
    }
    else if(location==2){
        LocName = "Camp house B";
        LogigingPerDay = 2500;
    }
    else if(location==3){
        LocName = "Camp house C";
        LogigingPerDay = 5000;
    }
    else if(location==4){
        LocName = "Camp house D";
        LogigingPerDay = 13000;
    }
    else if(location==2){
        LocName = "Camp house E";
        LogigingPerDay = 5000;
    }
    else {
        cout<<"Invalid Location selection (Nigga)"<<endl;
        return 2;
    }
    
    //_________________ Part 3 completing the cost_____________________
    double lodgingcost = LogigingPerDay * days;
    double LodgingDiscount = 0.0;
    double RegDiscount = 0.0;

    if (isPauStudent && (location == 1 || location ==2)){
        LodgingDiscount = 0.05 * lodgingcost;
    }
    
    if((days > 5)||(regFee > 12000)){
        RegDiscount = 0.05 * regFee;
    }

    double LodgingCostAfter = lodgingcost - LodgingDiscount;
    double RegDiscountAfter = regFee - RegDiscount;
    double total = lodgingcost  + regFee;

    //Random Promo

    cout<<"Name:"<<name<<"\n";
    cout<<"PAU student: "<<(isPauStudent ? "YES" : "NO")<< "\n";
    cout<<"Course: "<<coursename<<"\n";
    cout<<"Number of days: "<<days<<"\n";
    cout<<"Location: "<<LocName<<"\n";
    cout<<"Registration Fee: "<< regFee<<"\n";
    cout<<"Lodging Fee per day:"<< LogigingPerDay <<"\n";
    cout<<"Total Lodging cost: "<<lodgingcost <<"\n";
    
    
    cout<<"=============================================== \n";
    cout<<"Total Fee:"<< total <<"\n";
    cout<<"=============================================== \n";

//  cout<<name;
    return 0;
}