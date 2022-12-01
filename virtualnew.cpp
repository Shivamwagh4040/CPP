#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
    
    void fun()                  //1000
    {
        cout<<"Base fun\n";
    }
    
    virtual void gun()          //2000
    {
        cout<<"Base gun\n";
    }

    virtual void sun()          //300
    {
        cout<<"Base sun\n";
    }
    virtual void run()          //400
    {
        cout<<"Base run\n";      
    }
};

class Derived : public Base
{
    public:
        int X,Y;

    void gun()                    //5000
    {
        cout<<"Derived gun\n";
    }

    virtual void run()            //6000
    {
        cout<<"Derived run\n";
    }

    virtual void mun()            //7000
    {
        cout<<"Derived mun\n";
    }    
};

int main()
{
    cout<<"Size of Base class : "<<sizeof(Base)<<"\n";     //8
    cout<<"size of Derived class : "<<sizeof(Derived)<<"\n";  //16
    Base *bp = new Derived;
    Derived dobj;
    bp = &dobj;      //upcasting

    bp->fun();       //call 1000
    bp->gun();       //call 2000
    bp->sun();       //call 3000

    return 0;
}