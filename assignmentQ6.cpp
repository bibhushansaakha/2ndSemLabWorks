#include <iostream>
using namespace std;

class publication
{
protected:
    string title;
    float price;
public:
    void getData(string T,float P);
    virtual void putData()=0;
};

class book:public publication
{
private: 
    int pageCount;
public:
    void getData(string T,float P,int Page){title=T;price=P;pageCount=Page;}
    void putData()
    {
        cout<<"\nTitle: "<<title<<"\nPrice: "<<price<<"\nNo of Pages: "<<pageCount<<endl;
    }    
};

class tape:public publication
{
private:
    float playingTime;
public:
    void getData(string T,float P,int Time){title=T;price=P;playingTime=Time;}
    void putData()
    {
        cout<<"\nTitle: "<<title<<"\nPrice: "<<price<<"\nPlay Time: "<<playingTime<<endl;
    }
};

int main()
{
    string name[10];
    float pp[10],ptime[10];
    book *bk;
    tape *tp;
    int choice=1;
    bool type=0;
    publication *p[10];
    int pages[10],count=0;
    while (choice!=0)
    {
        cout<<"Do you want to Enter book[0] or tape[1]:\t";
        cin>>type;
        cout<<"Enter the name of Book:\t "<<count;
        cin>>name[count];
        cout<<"Enter the Price of the Book:\t";
        cin>>pp[count];
        if (type==0)
        {
            cout<<"Enter number of pages:\t";
            cin>>pages[count];
            bk=new book;
            bk->getData(name[count],pp[count],pages[count]);
            p[count]=bk;
            delete bk;
        }
        else
        {
            cout<<"Enter playing time of the tape:\t";
            cin>>ptime[count];
            tp=new tape;
            tp->getData(name[count],pp[count],ptime[count]);
            p[count]=tp;
            delete tp;
        }
        count++;
        cout<<"If you want to continue, enter any number. If you want to stop, press 0:\t";
        cin>>choice;
    }
    for (int i = 0; i < count; i++)
    {
        p[i]->putData();
    }
    
    
}