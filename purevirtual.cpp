#include<iostream>
using namespace std;

class cirlcle
{
    public:                     //Access specifier
        float PI;               //characteristics
        float Radius;    

        circle()                //default constructor
        {
            PI = 3.14;
            Radius = 0.0;
        }

        circle(float A, float B) //parameterised constructor
        {
            PI = A;
            Radius = B;
        }

        void Display()            //concrete method
        {
            cout<<"Value of Radius is :"<<Radius<<"\n";
        }

        virtual float Area() = 0;  //Abstract method
        virtual float Circumference() = 0;  //Abstract method  (without body)
};

class Marvellous : public circle 
{
    public:
        Marvellous() : circle()
        {

        }

        Marvellous(float X, float Y) : circle(X,Y)
        {

        }

        float Area()              //concrete method
        {
            float Ans = PI * Radius * Radius;
            return Ans; 
        }

        float Circumference()      //concrete method  (with body)
        {
            float Ans = 0.0;
            Ans = 2 * PI * Radius;
            return Ans;
        }

};

int main()
{
    Marvellous mobj1;
    Marvellous mobj2(3.14,10.89);

    float fret = 0.0;

    fret = mobj2.Area();
    cout<<"Area is : "<<fret<<"\n";

    fret = mobj2.Circumference();
    cout<<"Circumference is : "<<fret<<"\n";

    return 0;
}