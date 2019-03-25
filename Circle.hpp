#pragma once

#include <iostream>
#include <cmath>

using namespace std;

class Circle
{
private:
    
    const double Pi = 3.14;
    double *x;
    double *y;
    double *r;
    
public:
    Circle(double x, double y, double r);
    Circle();
    Circle(const Circle &obj);
    
    double GetParameters(Circle& obj);
    
    double SetParameters(double R);
    
    double Square(Circle& obj);
    double Length(Circle& obj);
    
    ~Circle();
};
