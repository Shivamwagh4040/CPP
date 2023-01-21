// Write a program which accept number from user and check whether it contain 0 in it or not.
// Input : 2395
// Output : there is no zero.

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

        bool CheckZero()
        {
            int iDigit = 0;

            if(iNo < 0)
            {
                iNo = -iNo;
            }

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                if(iDigit == 0)
                {
                    return 1;
                }
                iNo = iNo / 10;
            }
            return 0;
        }
};

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<< "Enter the number : "<<"\n";
    cin>>iValue;

    DigitX obj(iValue);

    cout<<obj.iNo<<"\n";

    if(bRet == false)
    {
        cout<<"The following digits contains zero";
    }
    else
    {
        cout<<"The following digits dont contain zero";
    }

    return 0;
}