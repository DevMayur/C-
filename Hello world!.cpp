#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    double x1,x2,a,b,c,d,e,f,g,h;

    cout<<"Enter a,b and c in quadratic eqn by comparing with standard form \n";
    cin>>a>>b>>c;


    d=b*b;
    e=a*c;
    g=4*e;
    f=sqrt(d-g);
    h=(-b+f);
    x1=h/(2*a);

    cout<<"root is "<<x1;
}
