/**
 * @file lab2q2.cpp
 * @author Bibhushan Saakha
 * @brief largest of 10 input numbers
 * @version 0.1
 * @date 2022-02-19
 * 
 * @copyright Copyright (c) 2022
 */
#include<iostream>
using namespace std;

class largest {
    public: 
    int numbers[10]; 
    int max = numbers[0];
    int maxreturn(largest);  
};

int largest::maxreturn(largest a)
{
    for(int i = 0 ; i<10; i++){
        if(a.numbers[i+1]>a.numbers[i])
        {
            max = a.numbers[i+1];    
        }   
    }
    return max; 
}

int main()
{
    largest l; 
    for(int i = 0; i<10; i++)
    {
        cout<<"Enter number "<<i+1<<"\t";
        cin>>l.numbers[i];
    }
    cout<<"\nThe Largest Number is\t"<<l.maxreturn(l);    
    return 0;
}