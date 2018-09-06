#include<iostream>
using namespace std;
long gcd(long,long);
int main()
{
    long x,y,hcf,lcm;
    cout<<"Enter two integers: "<<"\n";
    cin>>x>>y;
    hcf=gcd(x,y);
    lcm=(x*y)/hcf;
    cout<<"Greatest Common Divisor of Given Numbers is :"<<hcf<<"\n";
    cout<<"Least common multiple of Given two numbers is :"<<lcm<<"\n";
    return 0;
}
long gcd(long x,long y)
{

if(x==0)
{
    return y;
}
while (y!=0)
{
    if(x>y)
        x=x-y;
    else
        y=y-x;

return x;
}
}
