/**
 * @file lab7q2.cpp
 * @author Bibhushan Saakha
 * @brief draw Shapes as input by user
 * @version 0.1
 * @date 2022-04-01
 * 
 * @copyright Copyright (c) 2022
 */

#include<iostream>

using namespace std;

class shape
{
protected:
    
    int x,y;
public:
    shape(){x=0;y=0;};
    shape(int x,int y){this->x=x; this->y=y;};
    virtual void draw()=0;
};

class circle:public shape
{
protected:
    int radius;
public:
    circle(){radius=0;};
    circle(int x,int y,int radius):shape(x, y){this->radius=radius;};
    void draw()
    {
        cout<<"\nCircle of radius "<<radius<<" with centre at ( "<<x<<" , "<<y<<" ) is drawn.";
    }
};

class ellipse:public shape
{
protected:
    int xradius,yradius;
public:
    ellipse(){xradius=0;yradius=0;};
    ellipse(int x,int y,int xradius,int yradius):shape(x, y){this->xradius = xradius; this->yradius = yradius;};
    void draw()
    {
        cout<<"\nEllipse of horizontal radius "<<xradius<<" and vertical radius "<<yradius<<" with centre at ( "<<x<<" , "<<y<<" ) is drawn.";
    }
};

class rectangle:public shape
{
protected:
    int x1,y1;
public:
    rectangle(){x1=0,y1=0;};
    rectangle(int x,int y,int x1,int y1):shape(x, y){this->x1 = x1; this->y1 = y1;};
    void draw()
    {
        cout<<"\nRectangle of length "<<x1<<"and breadth "<<y1<<" with centre at ( "<<x<<" , "<<y<<" ) is drawn.";
    }
};

int main()
{
    shape *p;
    int user,x,y;
    while (user!=0)
    {
        cout<<"\n\nDo you want to draw a \n\t1. Circle \n\t2. Ellipse \n\t3. Rectangle \n\t0. Quit?\n";
        cin>>user;
        if (user==1)
        {
            int r;
            cout<<"\nEnter x co-ordinate of the Circle:\t";
            cin>>x;
            cout<<"\nEnter y co-ordinate of the Circle:\t";
            cin>>y;
            cout<<"\nEnter Radius of the Cricle:\t";
            cin>>r;
            circle circ(x,y,r);
            p = &circ;
        }

        else if (user==2)
        {
            int r1,r2;
            cout<<"\nEnter x co-ordinate of the Ellipse:\t";
            cin>>x;
            cout<<"\nEnter y co-ordinate of the Ellipse:\t";
            cin>>y;
            cout<<"\nEnter horizontal radius of the Ellipse:\t";
            cin>>r1;
            cout<<"\nEnter vertical radius of the Ellipse:\t";
            cin>>r2;
            ellipse ell(x,y,r1,r2);
            p=&ell;
        }

        else if (user==3)
        {
            int l,b;
            cout<<"\nEnter x co-ordinate of the Rectangle:\t";
            cin>>x;
            cout<<"\nEnter y co-ordinate of the Rectangle:\t";
            cin>>y;
            cout<<"\nEnter length of the Rectangle\t";
            cin>>l;
            cout<<"\nEnter breadth of the Rectangle:\t";
            cin>>b;
            rectangle rect(x,y,l,b);
            p = &rect;
            
        }
        else if (user==0)
        {
            break;
        }
        
        else
        {
            cout<<"\nInvalid input\n";
            break;
        }
        p->draw();
        cout<<"\n\n=========================================\n";

    }
    cout<<"\nThankyou for using this program!!!\n\n";
}