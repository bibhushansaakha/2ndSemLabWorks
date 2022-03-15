/**
 * @file lab6.cpp
 * @author Bibhushan Saakha
 * @brief area inheritance 
 * @version 0.1
 * @date 2022-03-14
 * 
 * @copyright Copyright (c) 2022
 */

#include<iostream>
#include<math.h>
using namespace std;

class Shape
{
public:
    double side_one, side_two;
    Shape():side_one(0),side_two(0){}
    Shape(double l,double b):side_one(l),side_two(b){}
    void set_Data(double,double);
    virtual void display_area();
};

void Shape::display_area()
{
    cout<<"The Area of the Shape is:\t";
}

class Triangle : public Shape
{
public:
    double side_three;
    void display_area()
    {
        double s=side_one+side_two+side_three;
        double area=pow(s*(s-side_one)*(s-side_two)*(s-side_three),1/2);
        cout<<"\nArea of the Triangle is:\t"<<area;
    }
};

class Rectangle : public Shape
{
public:
    void display_area()
    {
        double area=side_one*side_two;
        cout<<"\nArea of the Rectangle is:\t"<<area;
    }
};

int main()
{
    Shape Polygon;
    cout<<"\nEnter side one of the Polygon:\t";
    cin>>Polygon.side_one;
    cout<<"\nEnter side two of the Polygon:\t";
    cin>>Polygon.side_two;
    cout<<"\nEnter side three of the Polygon:\t";
}
