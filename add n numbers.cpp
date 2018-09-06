#include<iostream>
using namespace std;
int main()
{
    int n,c,value,sum=0;
    cout<<"Enter number of integers you want to add"<<"\n";
    cin>>n;
    cout<<"Enter integers you want to add";
    for(c=1;c<=n;c++)
    {
        cin>>value;
        sum=sum+value;
    }
    cout<<"Result is :"<<sum;
    return 0;
}
