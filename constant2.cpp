#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;
        const int k;
        const int l;

        Demo() : k(11), l(21)
        {
           i = 51;
           j = 101; 
        }
        Demo(int a, int b, int c, int d) : k(c), l(d)
        {
            i = a;
            j = b;
        }
};

int main()
{
    Demo obj;
    Demo obj2(10,20,30,40);

    return 0;
}