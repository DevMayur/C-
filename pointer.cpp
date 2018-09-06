#include<iostream>
using namespace std;
int main()
{
    int *p,a;
    p=&a;
    cout<<"Enter number :";
    cin>>a;
    cout<<"value is given as "<<*p<<endl;
    cout<<"Address is given as "<<p;

}
