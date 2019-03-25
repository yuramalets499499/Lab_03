#include <iostream>
#include <cmath>
#include "Circle.hpp"

int main()
{
    
    system("COLOR F0");
    
    Circle obj1(1.0, 2.5, 5.19);
    Circle *obj2 = new Circle;
    Circle obj3(obj1);
    
    cout << "\n Calculating the square and length of the circle :\n r = 5.19\n Coordinates of the center of circle :\n Point(1.0,2.5)" << endl;
    
    obj1.GetParameters(obj1);
    
    cout << " The square of circle = ";
    cout << obj1.Square(obj1) << endl;
    
    cout << " The length of circle = ";
    cout << obj1.Length(obj1) << endl;
    
    cout << "\n Replacement of circle radius value :\n r = 6.6\n";
    
    obj1.SetParameters(6.6);
    
    cout << " The new square of circle = ";
    cout << obj1.Square(obj1) << endl;
    
    cout << " The new length of circle = ";
    cout << obj1.Length(obj1) << endl;
    
    system("pause");
    return 0;
}
