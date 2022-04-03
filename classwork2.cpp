/**
 * @file classwork2.cpp
 * @author Bibhushan Saakha
 * @brief student information 
 * @version 0.1
 * @date 2022-04-01
 * 
 * @copyright Copyright (c) 2022
 */

#include <iostream>
using namespace std;

class student{
    static int sn;
public:
    student(){};
    virtual void studInfo()=0;
    virtual void inputInfo(string,int,float)=0;
};

int student::sn=0;

class CE_student : public student{
public:    
    string name;
    float mark;
    int rollno;
//public:
    void inputInfo(string a, int b,float c){
        name=a;
        rollno=b;
        mark=c;
    }
    void studInfo()
    {
        cout<<"\n Name: \t"<<name<<"\n Roll Number: \t"<<rollno<<"\n Marks: \t"<<mark;
    }
};


int main()
{
    string name;
    int rollno,decision;
    float mark;
    CE_student a[5];
    student *b;
    
    for (int i = 0; i < 5; i++)
    {
        cout<<"\n Enter information of "<<i+1<<" th student: \n";
        cout<<"\n Name: \t";
        cin>>name;
        cout<<"\n Roll number: \t";
        cin>>rollno;
        cout<<"\n Marks: \t";
        cin>>mark;
        a[i].inputInfo(name,rollno,mark);
    }

    while (decision!=0)
    {
        cout<<"\n1."<<a[0].name;
        cout<<"\n2."<<a[1].name;
        cout<<"\n3."<<a[2].name;
        cout<<"\n4."<<a[3].name;
        cout<<"\n5."<<a[4].name;
        cout<<"\n\n Which Student's information do you want to know: (Press 0 to Quit)\t";
        cin>>decision;
        if (decision==0)
        {
            break;
        }
        
        b=&a[decision-1];
        b->studInfo();
        cout<<"\n=========================================\n";
    }

    cout<<"\n=========================================\n All Results:\n";

    for (int i = 0; i < 5; i++)
    {
        a[i].studInfo();
    }   
}