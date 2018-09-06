#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,d,r1,r2;
    cout<<"Enter a,b,c from quadratic equation : \n";
    cin>>a>>b>>c;

    d=sqrt(b*b-(4*a*c));
    cout<<"Determinant is"<<d;

    if(d==0)
    {
       r1=(-b)/(2*a);
       r2=r1;
       cout<<"Roots are real and Equal";
    }
    else if(d>0)
    {
        r1=((-b)+d)/2*a;
        r2=((-b)-d)/2*a;
        cout<<"roots are real and distinct ";
    }
    else if(d<0)
    {
         r1=((-b)+d)/2*a;
         r2=((-b)-d)/2*a;
         cout<<"roots are imaginary and distinct ";
    }


    cout<<"Roots are: "<<r1<<" and "<<r2;
    return 0;

}
