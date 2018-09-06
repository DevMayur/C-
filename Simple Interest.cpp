#include<iostream>
using namespace std;
int main()
{
    int amount,rate,time,si,ans;
    cout<<"Enter amount :"<<"\n";
    cin>>amount;
    cout<<"Enter rate :"<<"\n";
    cin>>rate;
    cout<<"Enter time :"<<"\n";
    cin>>time;

    si=amount*rate*time;
    ans=si/100;
    cout<<"Simple interest is :"<<ans;
    return 0;
}
