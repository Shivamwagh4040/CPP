#include<iostream>
using namespace std;

class Base1
{
    public:
        int A;

        Base1()
        {
            cout<<"Base1 constructor\n";
        }
        ~Base1()
        {
            cout<<"Base1 Destructor\n";
        }
        void fun()
        {
            cout<<"Base1 fun\n";
        }
};

class Base2
{
    public:
        int I,J,K;

         Base2()
        {
            cout<<"Base2 constructor\n";
        }
        ~Base2()
        {
            cout<<"Base2 Destructor\n";
        }
        void gun()
        {
            cout<<"Base2 gun\n";
        }

};

class Derived : public Base1, public Base2
{
    public:
        int X,Y;
         Derived()
        {
            cout<<"Derived constructor\n";
        }
        ~Derived()
        {
            cout<<"Derived Destructor\n";
        }
        void sun()
        {
            cout<<"Derived sun\n";
        }

};

int main()
{
    Derived dobj;
    
    return 0;
}