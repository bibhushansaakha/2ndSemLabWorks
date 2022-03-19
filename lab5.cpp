/**
 * @file lab5.cpp
 * @author Bibhushan Saakha
 * @brief overload operators 
 * @version 0.1
 * @date 2022-03-13
 * 
 * @copyright Copyright (c) 2022
 */

#include<iostream>

using namespace std;

class Complex
{
private:
    int x;
    int y;
    
public:
    Complex()
    {
        x=0;
        y=0;
    };

    Complex (int a, int b)
    {
        x=a;
        y=b;
    }

    void printer()
    {
        cout<<"\t"<<x<<"+ ("<<y<<")i"<<endl;
    }

    void operator - (void)
    {
        x=-x;
        y=-y;

    }

    friend Complex operator * ( Complex  c,int s)
    {
        Complex temp;
        temp=c;
        temp.x= s*(temp.x);
        temp.y=s*(temp.y);
        return temp;
    };

    Complex operator +(Complex c)
    {
        return Complex(c.x+x,c.y+y);
    }

    Complex operator -(Complex c)
    {
        return Complex(x-c.x,y-c.y);
    }

    Complex operator +=(Complex c)
    {
        x+=c.x;
        y+=c.y;
        return *this;
    }

    bool operator ==(Complex c)
    {
        if (x==c.x && y==c.y)
        {
            return true;
        }
        return false;
    }

    bool operator >(Complex c)
    {
        if (x>c.x && y>c.y)
        {
            return true;
        }
        return false;
    }

    bool operator !=(Complex c)
    {
        if (x!=c.x || y!=c.y)
        {
            return true;
        }
        return false;
    }

    Complex operator ++()
    {
        return Complex(x++,y++);
    }

     Complex operator ++(int )
    {
        return Complex(x++,y++);
    }

    friend ostream &operator<<( ostream &output, Complex &c ) { 
        output << " " << c.x << "+" << c.y<<"i"<<endl;
        return output;
    }
};

int main()
{
    int real,imaginary;
    cout<<"\nEnter real part of the complex number:\t";
    cin>>real;
    cout<<"\nEnter imaginary part of the complex number:\t";
    cin>>imaginary;
    Complex c1(real,imaginary),c2;

    cout<<"\n\nThe complex number is :\t"<<c1<<endl;
    c1.printer();

    -c1;
    cout<<"\nUsing minus unary operator: \n";
    c1.printer();

    c2=c1*(4);
    cout<<"\nUsing scalar multiplication operator: \n";
    c2.printer();

    c2=c2+c1;
    cout<<"\nUsing plus binary operator: \n";
    c2.printer();

    c2=c2-c1;
    cout<<"\nUsing minus binary operator: \n";
    c2.printer();

    c1+=c2;
    cout<<"\nUsing += shorthand operator: \n";
    c1.printer();

    cout<<"\nUsing == equals to operator: \n";
    cout<<"\t"<<(c1==c2)<<" and "<<(c1==c1)<<endl;

    cout<<"\nUsing greater than operator: \n";
    cout<<"\t"<<(c1>c2);

    cout<<"\nUsing != not equal to operator: \n";
    cout<<"\t"<<(c1!=c2)<<" and "<<(c1!=c1)<<endl;

    c1++;
    cout<<"\nUsing post increment operator: \n";
    c1.printer();

    ++c1;
    cout<<"\nUsing pre increment operator: \n";
    c1.printer();

}