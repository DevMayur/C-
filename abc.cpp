#include<iostream>
using namespace std;
int a[5][5];
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
    int i,j;
    cout<<"enter the elements row wise:"<<endl;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>a[i][j];
        }
         cout<<endl;
    }
}
int putdata()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
}
