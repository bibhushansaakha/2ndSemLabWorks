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
        double s=(side_one+side_two+side_three)/2;
        double area=pow((s*(s-side_one)*(s-side_two)*(s-side_three)),0.5);
        if (area==0)
        {
            cout<<"Invalid Input. The lengths of any two sides of a triangle must add up to more than the length of the third side.";
        }
        else
        {
            cout<<"\nArea of the Triangle is:\t"<<area;
        }
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
    int user;
    Rectangle rect;
    Triangle tip;
    while (user!=0)
    {
        cout<<"\n\nDo you want to find the area of Triangle(1) or a Rectangle(2) or Quit(0)?\n";
        cin>>user;
        if (user==1)
        {
            cout<<"\nEnter side one of the Triangle:\t";
            cin>>tip.side_one;
            cout<<"\nEnter side two of the Triangle:\t";
            cin>>tip.side_two;
            cout<<"\nEnter side three of the Triangle:\t";
            cin>>tip.side_three;
            tip.display_area();
        }

        else if (user==2)
        {
            cout<<"\nEnter side one of the Rectangle:\t";
            cin>>rect.side_one;
            cout<<"\nEnter side two of the Rectangle:\t";
            cin>>rect.side_two;
            rect.display_area();
        }

        else if (user==0)
        {
            cout<<"\nThankyou for using this program!!!\n\n";
        }
        
        else
        {
            cout<<"\nInvalid input\n";
        }
    }
          
}
