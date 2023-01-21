//Write a program which accept number from user and count frequency of 2 in it.
// Input : 2395
// Output : 1

#include<iostream>
using namespace std;

class DigitX
{
    public:
        int iNo = 0;

        DigitX()
        {
            iNo = 0;
        }
        DigitX(int i)
        {
            iNo = i;
        }

        int iCount()
        {
            int iDigit = 0;
            int iCnt = 0;

            if(iNo < 0)
            {
                iNo = -iNo;
            }

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                if(iDigit == 2)
                {
                    iCnt++;
                }
                iNo = iNo / 10;
            }
            return iCnt;
        }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter Any number : "<<"\n";
    cin>>iValue;

    DigitX obj(iValue);

    iRet = obj.iCount();

    cout<<"Occurence of 2 in digit is : "<<iRet<<"\n";

    return 0;
}