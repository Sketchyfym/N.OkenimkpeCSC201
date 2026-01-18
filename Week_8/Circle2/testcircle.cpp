#include <iostream>
#include "circle.h"
using namespace std;

int main()
{
    circle circle1;
    circle circle2(5.0);

    cout<<"The area of the circle of radius"
    <<circle1.radius << "is" <<circle1.getArea() <<endl;
    cout<< "The area of the circle of radius" 
    << circle2.radius << "is" << circle2.getArea() <<endl;

    circle2.radius = 100;
    cout<< "The area of the circle of radius "
    <<circle2.radius << "is" <<circle2.getArea() <<endl;

    return 0;
}
