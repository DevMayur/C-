#include<iostream>
using namespace std;
int main()
{
    int a,b,c,op;
    cout<<"Enter first operand:"<<"\n";
    cin>>a;
    cout<<"Enter Operator choice:"<<"\n";
    cout<<"1.Addition "<<"2.Subtraction"<<"3.Multiplication"<<"4.Division";
    cin>>op;
    cout<<"Enter second operand:"<<"\n";
    cin>>b;

    if(op==1)
        c=a+b;
    if(op==2)
        c=a-b;
    if(op==3)
        c=a*b;
    if(op==4)
        c=a/b;
    cout<<"Result is:"<<c;
    return 0;
}
