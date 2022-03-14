/**
 * @file lab3.cpp
 * @author Bibhushan Saakha
 * @brief print out the distance between two points 
 * @version 0.1
 * @date 2022-02-19
 * 
 * @copyright Copyright (c) 2022
 */
#include <iostream>
#include <cmath>

using namespace std;

class point
{
public:
    float x,y;
    void print()
    {
        cout<<"("<<x<<","<<y<<")";
    }

};
   
class vect
{
public:
    point start,end;
    float distance();
    void print();
};

float vect::distance()
{
    return (sqrt(pow(end.x - start.x, 2) + pow(end.y - start.y, 2) * 1.0));
}
void vect:: print()
{
    start.print();
    cout<<" => ";
    end.print();
}

int main()
{
    vect v;
    cout<<"Enter starting x co-ordinte:\t";
    cin>>v.start.x;
    cout<<"Enter starting y co-ordinte:\t";    
    cin>>v.start.y;
    cout<<"Enter end x co-ordinte:     \t";
    cin>>v.end.x;
    cout<<"Enter end y co-ordinte:     \t";
    cin>>v.end.y;
    v.print();
    cout<<"\n magnitude of the vector is\t"<<v.distance()<<endl;
    return 0;
}