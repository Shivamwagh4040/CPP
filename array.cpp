#include<iostream>
using namespace std;

class Array
{
    public: 
        int isize;
        int *Arr;

        Array(int ilength = 10)
        {
            cout<<"Inside constructor\n";
            isize = ilength;
            Arr = new int[isize];
        }
        ~Array()
        {
            cout<<"Inside destructor\n";
            delete[]Arr;
        }
        void Accept()
        {
            cout<<"Enter the value\n";
            int i = 0;

            for(i = 0; i < isize; i++)
            {
                cin>>Arr[i];
            }
        }
        void Display()
        {
            cout<<"Elements of array are : \n";
            int i = 0;
            for(i = 0;i < isize; i++)
            {
                cout<<Arr[i]<<"\n";
            }
        }
        int Summation()
        {
            int iSum = 0, i = 0;
            for(i = 0; i < isize; i++)
            {
                iSum = iSum + Arr[i];
            }
        }
};
int main()
{
    cout<<"Inside main\n";
    int iRet = 0;

    Array obj1(4);
   
    obj1.Accept();
    obj1.Display();

    iRet = obj1.Summation();
    cout<<"Summation of four numbers : ""\n";

    return 0;
}