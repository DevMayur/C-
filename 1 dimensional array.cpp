#include<iostream>
using namespace std;
int a[10];
int getdata();
int putdata();
int main()
{
    getdata();
    putdata();
    return 0;
}
int getdata()
{
    int i;
    cout<<"Enter Array elements : \n";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
}
int putdata()
{
    int i;
    cout<<" The array elements are: \n";
    cout<<"[  ";
    for(i=0;i<10;i++)
    {
        cout<<a[i];
        cout<<"  ";
    }
    cout<<" ]";
}
