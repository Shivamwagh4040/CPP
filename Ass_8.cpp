//Write a program which accept number from user and return the count of digits between 3 and 7.
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
                iDigit = iDigit % 10;
                if((iDigit > 3) && (iDigit < 7))
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

    cout<<"Enter the number : "<<"\n";
    cin>>iValue;

    DigitX obj(iValue);

    iRet = obj.iCount();

    cout<<"Numbers between 3 & 7 are : "<<iRet<<"\n";

    return 0;
}