#include<iostream>
using namespace std;

class DigitX
{
    public:
        int iNo;

        DigitX()
        {
            iNo = 0;
        }
        DigitX(int i)
        {
            iNo = i;
        }

        int SumEvenDigit()
        {
            int iDigit = 0;
            int iSum = 0;
            int iTemp = iNo;

            while(iTemp != 0)
            {
                iDigit = iTemp % 10;
                if(iDigit % 2 == 0)
                {
                    iSum = iSum + iDigit;
                }
                iTemp = iTemp / 10;
            }
            return iSum;
        }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Please Enter Number : "<<"\n";
    cin>>iValue;

    DigitX obj(iValue);

    iRet = obj.SumEvenDigit();

    cout<<"Summation of even digits is : "<<iRet<<"\n";

    cout<<obj.iNo;

    return 0;
}