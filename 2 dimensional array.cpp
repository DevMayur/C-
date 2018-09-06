#include<iostream>
using namespace std;
int a[4][4];
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
    cout<<"Enter array elements row wise : \n";
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cin>>a[i][j];
        }
        cout<<"\n";
    }
}

int putdata()
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<a[i][j];
        }
        cout<<"\n";
    }
}
