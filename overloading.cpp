#include<iostream>
using namespace std;

class overloading
{
    public:
        //Add@2ii
        int Add(int a, int b)                   //1000
        {
            cout<<"Addition of integers\n";
        }
        //Add@2ff
        float Add(float a, float b)            //2000
        {
            cout<<"Addition of floats\n";
        }
        //Add@2dd
        double Add(double a, double b)         //3000
        {
            cout<<"Addition of doubles\n";
        }
        //Add@3iii
        int Add(int a, int b, int c)           //4000
        {
            cout<<"Addition of 3 integers\n";
        }
        //fun@2if
        void Fun(int a, float b)
        {}
        //fun@2fi
        void Fun (float x, int y)
        {}
};

int main()
{
    overloading obj;
    int i;
    float f;
    double d;

   i = obj.Add(11,21);        //call 1000
   cout<<i<<"\n";
   i = obj.Add(11,21,51);      //call 4000
   cout<<i<<"\n";
   d = obj.Add(10.9,89.5);     //call 3000
   cout<<d<<"\n";
   f = obj.Add(10.9f,89.5f);   //call 2000
   cout<<f<<"\n";
    return 0;
}