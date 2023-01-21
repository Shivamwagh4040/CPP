// Accept N numbers from user and display all such elements which are even and divisible by 5.
// Input : N : 6
//         Elements : 85 66 3 80 93 88 
// Output : 80

#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int i)
        {
            iSize = i;
            Arr = new int[iSize];
        }

        void Accept()
        {
            cout<<"Enter the numbers : "<<"\n";
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            cout<<"Elemets of array are : "<<"\n";
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
        }

        int DisplayEvenDivisibleBy5()
        {
            int i = 0;
            int iEven = 0;

            for(i = 0; i < iSize; i++)
            {
                if((Arr[i] % 2 == 0) && (Arr[i] % 5 == 0))
                {
                    cout<<Arr[i]<<"\t";
                }
            }
            return;
        }
};

int main()
{
    int iLength = 0;
    int iRet = 0;

    cout<<"Enter the the number of elements : "<<"\n";
    cin>>iLength;

    ArrayX obj(iLength);

    obj.Accept();
    obj.Display();

    iRet = obj.DisplayEvenDivisibleBy5();
    cout<<"Elements which are even and divisible by 5 are : "<<iRet<<"\n";

 
    return 0;
}