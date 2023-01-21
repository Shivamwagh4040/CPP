//Write a program which accept number from user and return Multiplication of all the digits.
// Input : 2395
// Output : 270

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

        int Multiplication()
        {
            int iDigit = 0;
            int iMult = 1;

            if(iNo < 0)
            {
                iNo = -iNo;
            }

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                if(iDigit == 0)
                {
                    iDigit = 1;
                }
                iMult = iMult * iDigit;
                iNo = iNo / 10;
            }
            return iMult;
        }

};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue;

    DigitX obj(iValue);

    iRet = obj.Multiplication();

    cout<<"Multiplication of all digits is : "<<iRet<<"\n";

    return 0;
}