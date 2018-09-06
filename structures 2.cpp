#include<iostream>
#include<string>
using namespace std;
struct person
{
    int age;
    int no;
    char name[50];
};
int main()
{
    person a;
    cout<<"Enter Person name: ";
    cin.get(a.name, 50);
    cout<<"Person Details: "<<endl<<"Enter Person number :";
    cin>>a.no;
    cout<<"Enter Person age :";
    cin>>a.age;
    cout<<"Entered details are :"<<endl<<"Person name :"<<a.name<<endl;
    cout<<"Person number :"<<a.no<<endl;
    cout<<"Person age :"<<a.age<<endl;
    return 0;
}
