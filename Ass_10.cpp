//Write a program which accept number from user and return Difference between summation of even digits and summation of all odd digits.
// Input : 2395
// Output : -15    (2 - 17)

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

        int Difference()
        {
            int iDigit = 0;
            int iEven = 0;
            int iOdd = 0;

            if(iNo < 0)
            {
                iNo = -iNo;
            }

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                if(iDigit % 2 == 0)
                {
                    iEven = iEven + iDigit;
                }
                else
                {
                    iOdd = iOdd + iDigit;
                }
                iNo = iNo / 10;
            }
            return iEven - iOdd;
        }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue;

    DigitX obj(iValue);

    iRet = obj.Difference();

    cout<<"Summation of even digits and odd digits is : "<<iRet<<"\n";

    return 0;
}