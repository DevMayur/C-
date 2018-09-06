#include<iostream>
#include<string>
using namespace std;

struct student
{
    double roll;
    char name[100];
    int age;
};

int main()
{
    student p1;
    cout<<"Enter Student Name :"<<endl;
    cin.get(p1.name, 100);
    cout<<"Enter roll number :"<<endl;
    cin>>p1.roll;
    cout<<"Enter age :"<<endl;
    cin>>p1.age;

    //output



    cout<<"Data Entered is :"<<endl;
    cout<<"Roll number :"<<p1.roll<<endl;
    cout<<"Name is :"<<p1.name<<endl;
    cout<<"Age is :"<<p1.age<<endl;
    return 0;

}
