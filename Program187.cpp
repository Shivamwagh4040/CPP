#include<iostream>
using namespace std;

// Problems on numbers

class Numbers
{
    public:
        int iNo;

        Numbers(int i)
        {
            iNo = i;
        }

        void Function()
        {
            // Logic
        }
};

int main()
{
    int iValue;

    cout<<"Enter number : \n";
    cin>>iValue;

    Numbers obj(iValue);
    
    obj.Function();

    return 0;
}