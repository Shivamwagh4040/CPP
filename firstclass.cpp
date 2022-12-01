#include<iostream>

using namespace std;

//class declaration
class maths
{
   public:       //Access specifier
      int iNo1;  //characteristics
      int iNo2;  //characteristics

   maths()    //constructor (default)
   {
       iNo1 = 0;
       iNo2 = 0;
   }

   maths(int A, int B) //constructor (parameterised)
   {
       iNo1 = A;
       iNo2 = B;
   }

   int Addition()  //Behaviour
   {
       return iNo1 + iNo2;
   }

   int Substraction() //Behaviour
   {
       return iNo1 - iNo2;
   }

};
int main()
{
    maths mobj1;
    maths mobj2(11,10);
    int ret = 0;

    ret = mobj2.Addition();
    cout<<"Addition is : "<<ret<<"\n";

    ret = mobj1.Addition();
    cout<<"Addition is : "<<ret<<"\n";

    return 0;
}