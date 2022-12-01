#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j;
        //parameterised constructor with default values
        Demo(int x = 10, int y = 20)
        {
            i = 10;
            j = 20;

        }
        void fun()
        {
            i++;
            j++;
        }
        void gun()const
        {
            i++;
            j++;
        }
};

int main()
{
    Demo obj1;           //10   20
    Demo obj2(11);       //11   20
    Demo obj3(11,21);    //11   21
    obj.fun();
    obj3.gun();
    return 0;
}