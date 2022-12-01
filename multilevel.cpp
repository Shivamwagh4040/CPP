#include<iostream>
using namespace std;

class Base
{
    public:
       int A,B;

       Base()
       {
           cout<<"Inside Base constructor\n";
       }
       ~Base()
       {
           cout<<"Inside Base destructor\n";
       }
       void fun()
       {
           cout<<"Inside Base fun\n";
       }
};

class Derived : public Base   //class derived extends base (syntax of java)
{
    public:
       int X,Y;

       Derived()
       {
            cout<<"Inside derived constructor\n";
       }

       ~Derived()
       {
            cout<<"Inside derived destructor\n";
       }

       void gun()
       {
            cout<<"Inside gun of Derived\n";
       }
};

class DerivedX : public Derived
{
    public:
    derivedX()
}

int main()
{
    //derived dobj;    //static memory allocation

    Derived * ptr = NULL;

    ptr = new Derived;  //dynamic memory alocation

    ptr->fun();
    ptr->gun();

    delete ptr;

    return 0;
}