/**
 * @file lab4.cpp
 * @author Bibhushan Saakha
 * @brief area and perimeter of a rectangle 
 * @version 0.1
 * @date 2022-03-13
 * 
 * @copyright Copyright (c) 2022
 */

#include<iostream>

using namespace std;

class Rectangle
{
private:
    int length, breadth;
public:
    Rectangle(){length=0; breadth=0;}
    void setSize(int l, int b);
    int getArea( );
    int getPerimeter( );
};

void Rectangle::setSize(int l, int b)
{
    length=l;
    breadth=b;
}

int Rectangle::getArea()
{
    int Area=length*breadth;
    return Area;
}

int Rectangle::getPerimeter()
{
    int Perimeter=2*(length+breadth);
    return Perimeter;
}

int main()
{
    int l,b;
    Rectangle a;
    cout<<"Enter Length of the Rectangle:\t";
    cin>>l;
    cout<<"Enter Breadth of the Rectangle:\t";
    cin>>b;
    a.setSize(l,b);
    cout<<"Area:\t"<<a.getArea()<<"\nPerimeter:\t"<<a.getPerimeter();
}
