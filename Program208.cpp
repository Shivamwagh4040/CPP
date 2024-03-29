// Check Anagram
// Input = 789567     597768
// Output = Numbers are anagram

#include<iostream>
using namespace std;

bool CheckAnagram(int iNo1, int iNo2)
{
    int Frequency[10] = {0};
    bool Flag = true;
    int iDigit = 0;

    while(iNo1 != 0)
    {
        iDigit = iNo1 % 10;
        Frequency[iDigit]++;
        iNo1 = iNo1 / 10;
    }

    while(iNo2 != 0)
    {
        iDigit = iNo2 % 10;
        Frequency[iDigit]--;
        iNo2 = iNo2 / 10;
    }

    for(int iCnt = 0; iCnt < 10; iCnt++)
    {
        if(Frequency[iCnt] != 0)
        {
            Flag = false;
            break;
        }
    }
    return Flag; 
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    cout<<"Enter first number : "<<"\n";
    cin>>iValue1;

    cout<<"Enter Second number : "<<"\n";
    cin>>iValue2;

    bRet = CheckAnagram(iValue1, iValue2);

    if(bRet == true)
    {
        cout<<"Numbers are anagram"<<"\n";
    }
    else
    {
        cout<<"Numbers are not anagram"<<"\n";
    }

    return 0;
}