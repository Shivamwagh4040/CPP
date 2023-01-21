// Accept N numbers from user and return difference between summation of even element and summation of odd elements.
// Input : N : 6.
//         Elements : 85 66 3 80 93 88 
// Output : 53  (234 - 181) 

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
            Arr = new int [iSize];
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
            cout<<"Elements of array are : "<<"\n";
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }

        int Difference()
        {
            int i = 0;
            int EvenSum = 0;
            int OddSum = 0;

            for(i = 0; i < iSize; i++)
            {
                if(Arr[i] % 2 == 0)
                {
                    EvenSum = EvenSum + Arr[i];
                }
                else
                {
                    OddSum = OddSum + Arr[i];
                }
            }
            return EvenSum - OddSum;
        }
};

int main()
{
    int iLength = 0;
    int iRet = 0;

    cout<<"Enter the number of elements : "<<"\n";
    cin>>iLength;

    ArrayX obj(iLength);

    obj.Accept();
    obj.Display();

    iRet = obj.Difference();

    cout<<"Difference between even elements and odd elements is : "<<iRet<<"\n";

    return 0;

}