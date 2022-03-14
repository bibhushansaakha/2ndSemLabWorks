/**
 * @file lab1q1.cpp
 * @author Bibhushan Saakha
 * @brief quadratic equation using OOP
 * @version 0.1
 * @date 2022-02-19
 * 
 * @copyright Copyright (c) 2022
 */

#include<iostream>
#include<cmath>
using namespace std;

class quadratic {
    public: 
    float a,b,c; 
    float realorimaginary(quadratic);
    
    quadratic (float ia, float ib, float ic){
        a = ia; 
        b = ib; 
        c = ic; 
    }

};
float quadratic::realorimaginary(quadratic q){
    float x = q.a; 
    float y = q.b; 
    float z = q.c; 
    float result = pow(y,2)- 4*x*z; 
    if(result>=0){
        cout<<"\n It gives real solutions";
        return 0 ; 
    }
    else if (result<0)
    {
        cout<<"\n It gives imaginary solutions";
        return 0; 
    }
    else
    {
        cout<<"\n Invalid";
        return 0;
    }
    
}

int main()
{
    float a,b,c;
    cout<<"\nEnter a:";
    cin>>a;
    cout<<"\nEnter b:";
    cin>>b;
    cout<<"\nEnter c:";
    cin>>c;
    quadratic f(a,b,c); 
    f.realorimaginary(f);
    return 0;
}