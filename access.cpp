#include<iostream>
using namespace std;

class Base
int main()
{
     public:
         int i;
     private:
        int j;
     protected:
         int K;
    public:
        base()
        {
            i = 10;
            j = 20;
            k = 30;
        }
        void fun()
        {
            cout<<"Value of public i : "<<i<<"\n";
            cout<<"Value of private j : "<<j<<"\n";
            cout<<"Value of private k : "<<k<<"\n";
            
        }
};

int main()
{
    Base bobj;
    cout<<"Value of public i :"<<bobj.i<<"\n";
    cout<<"Value of private j :"<<bobj.j<<"\n";
    cout<<"Value of protected k :"<<bobj.k<<"\n";

    bobj.fun();




    return 0;
}