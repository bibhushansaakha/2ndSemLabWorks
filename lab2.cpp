/**
 * @file lab3.cpp
 * @author Bibhushan Saakha
 * @brief finding x and y from two equations
 * @version 0.1
 * @date 2022-02-19
 * 
 * @copyright Copyright (c) 2022
 */
#include<iostream>
using namespace std;
void solution(float &x,float &y,float &a,float &b,float &c,float &d,float &m,float &n)
{
    x=(m*d-b*n)/(a*d-c*b);
    y=(n*a-m*c)/(a*d-c*b);
}
int main()
{
    //for the values of x and y 
    float x=0,y=0;
    //For first equation ax+by=m
    float a, b, m;
    //for second equation cx+dy=n
    float c,d,n;

    cout<<"Enter the value of a,b,m for equation ax + by = m"<<endl;
    cin>>a;
    cin>>b;
    cin>>m;
    cout<<"Enter the value of c,d,n for equation cx + dy = n"<<endl;
    cin>>c;
    cin>>d;
    cin>>n;
    solution(x,y,a,b,c,d,m,n);
    cout<<"the value of x and y are:\t"<<x<<','<<y<<endl;
}