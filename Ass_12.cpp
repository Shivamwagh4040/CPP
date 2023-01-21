// Accept N numbers from user and display such elements which are divisible bt 5.
// Input : N : 6
//         Elements : 85 66 3 80 93 88 
// Output : 85 80

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
            cout<<"Elements of array are : "<<"\n";
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
        }

        int Divisible()
        {
            int i = 0;

            for(i = 0; i < iSize; i++)
            {
                if(Arr[i] % 5 == 0)
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

    cout<<"Enter the number of elemets : "<<"\n";
    cin>>iLength;

    ArrayX obj(iLength);

    obj.Accept();
    obj.Display();

    iRet = obj.Divisible();
    cout<<"Numbers which are divisible by 5 are : "<<iRet<<"\n";

    return 0;
}