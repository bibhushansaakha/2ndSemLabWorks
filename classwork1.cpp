/**
 * @file classwork1.cpp
 * @author Bibhushan Saakha
 * @brief count number of objects created
 * @version 0.1
 * @date 2022-04-01
 * 
 * @copyright Copyright (c) 2022
 */

#include <iostream>
using namespace std;

class obj
{
    static int count;
public:
    int id;
    obj()
    {
        id = ++count;
    }
    obj(int id)
    {
        this->id = id;
        count++;
    }
    obj(obj&a)
    {
        count++; 
        id = a.id;
    }

    void display()
    {
        cout << "count: " << count << "\tid: " << id << endl;
    }

    static void displayStat()
    {
        cout << "count: " << count << endl;
    } 
};

int obj::count = 0;

int main()
{
    obj first;
    first.display();
    obj next(30);
    obj last = first;
    next.display();
    last.displayStat();
    
}