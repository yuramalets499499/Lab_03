#include <iostream>
#include <cmath>
#include "Circle.hpp"

using namespace std;

Circle::Circle()
{
    x = new double(0);
    y = new double(0);
    r = new double(0);
    
    cout << " constuctor by default has worked " << endl;
}
Circle::Circle(double x, double y, double r)
{
    this->x = new double(x);
    this->y = new double(y);
    this->r = new double(r);
    
    cout << " constructor with parameters has worked " << endl;
}
Circle::Circle(const Circle &obj)
{
    x = new double(*obj.x);
    y = new double(*obj.y);
    r = new double(*obj.r);
    
    cout << " constructor of copy has worked " << endl;
}
double Circle::GetParameters(Circle& obj)
{
    return *x;
    return *y;
    return *r;
}
double Circle::SetParameters(double R)
{
    
    return *r = R;
}
double Circle::Square(Circle& obj)
{
    return Pi * (*r*(*r));
}
double Circle::Length(Circle& obj)
{
    return 2.0 * Pi * (*r);
}
Circle::~Circle()
{
    delete x;
    delete y;
    delete r;
    
    cout << " destructor has worked " << endl;
}
