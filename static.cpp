#include<iostream>
using namespace std;

class demo
{
    public:               //access specifier
        int i;            //instance variable
        int j;            //instance variable
        static int k;     //clas variable
        static int l;     //class variable

        demo()            //default constructor
        {
            i = 0;
            j = 0;
        }

        demo(int a, int b) //parameterised constructor
        {
            i = a;
            j = b;
        }

        void fun()          //instace method
        {
          //static + non static
          cout<<"inside non static method fun\n";
          cout<<"value of i :"<<this->i<<"\n";
          cout<<"value of j :"<<this->j<<"\n";
          cout<<"value of k :"<<k<<"\n";
          cout<<"value of l :"<<l<<"\n";
        }
        static void gun()    //class method
        {
          //static
          cout<<"inside static gun method\n";
          cout<<"value of k :"<<k<<"\n";
          cout<<"value of l :"<<l<<"\n";
        }
};
//load time variables
int demo::k = 0;
int demo::l = 0;

int main()
{ 
    cout<<"inside main\n";
    cout<<"Value of k : "<<demo::k<<"\n";   //0
    cout<<"Value of l : "<<demo::l<<"\n";   //0

    demo::gun();

    demo obj1(10,11);
    demo obj2(20,21);
    demo obj3;

    cout<<"value of i in obj1 : "<<obj1.i<<"\n";  //10
    cout<<"value of i in obj2 : "<<obj2.i<<"\n";  //20

    cout<<"value of j in obj1 : "<<obj1.j<<"\n";  //11
    cout<<"value of j in obj2 : "<<obj2.j<<"\n";  //21
    
    obj1.fun();
    obj2.fun();
    
    return 0;
}