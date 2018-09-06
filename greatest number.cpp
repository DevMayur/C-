#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers";
    cin>>a>>b>>c;
    if(a>=b && a>=c)
        cout<<"the greatest number is:"<<a;
    else if (b>=a && b>=c)
    cout<<"the greatest number is:"<<b;
    else if (c>=a && c>=b)
    cout<<"the greatest number is:"<<c;



}
