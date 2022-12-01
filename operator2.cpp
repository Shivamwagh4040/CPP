using namespace std;
#include<iostream>

class Demo
{
    public:
        int A,B;
        Demo(int i = 0, int j = 0)
        {
            A = i;
            B = j;
        }
};

int main()
{
    Demo obj1;
    Demo obj2(11);
    Demo obj3(11,21);
    
    return 0;
}