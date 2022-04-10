/**
 * @file lab7q2&lab8.cpp
 * @author Bibhushan Saakha
 * @brief sort numbers in an array and use exception handling
 * @version 0.1
 * @date 2022-04-04
 * 
 * @copyright Copyright (c) 2022
 */

#include <iostream>
using namespace std;

template <class Large,class abs>
Large sortLarge(Large array[],abs num)
{
    for (int i = 0; i < num; i++)
    {
        cout<<"\nEnter number in "<<i+1<<" place:\t";
        cin>>array[i];
    }
    for(int m=0; m<num-1; m++)
    {
        for(int n=m+1; n<num; n++)
        {
            if(array[m]>array[n]) // for ascending order
            {
                Large temp;
                temp = array[m];
                array[m] = array[n];
                array[n] = temp;
            }
        }
    }
    cout<<"\nThe Sorted numbers in ascending order is:\n";
    for (int i = 0; i < num; i++)
    {
        cout<<array[i]<<"\t";
    }
    return 0;
}

int main()
{
    int num,decision;
    cout<<"Do you want to store int[1] or float[2]: \t";
    cin>>decision;
    try
    {
        if (decision!=1 && decision!=2)
        throw 1;
        else
        {
            cout<<"\nHow many numbers do you want to store in the array: [1-10]\t";
            cin>>num;
            try
            {
                if (num>10){throw 1;}
                else if (num<0){throw 2.00;}
                else if (!(num>0 && num<5)){throw 'a';}
                else 
                {
                    if (decision==1)
                    {
                        int array[10];
                        sortLarge(array,num);    
                    }
                    else if (decision==2)
                    {
                        float array[10];
                        sortLarge(array,num);
                    } 
                }
            }
            catch(int e)
            {
                cout<<"\n\nArray out of Bound."<<endl;
            }
            catch(double n) 
            {
                cout<<"\n\nNegative Value."<<endl;
            } 
            catch(char e) 
            {
                cout<<"\n\nNot an Integer between 1 to 10."<<endl;
            }
        }
                
    }
    catch(int e)
    {
        cout<<"Error!! Not a valid option"<<endl;
    }       
}