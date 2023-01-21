//Write a program which accept number from user and display its digitd in reverse order.
// Input : 2395
// Output : 5
//          9   
//          3
//          2

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

        int DisplayDigit()
        {
            int iDigit = 0;

            if(iNo < 0)
            {
                iNo = -iNo;
            }

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                cout<<iDigit;
                iNo = iNo / 10;
            }
        }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue;

    DigitX obj(iValue);

    iRet = obj.DisplayDigit();

    cout<<"Digits in reverse order are : "<<iRet<<"\n";

    return 0;
}
