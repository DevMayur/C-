#include<iostream>
using namespace std;
class student
{
public:
    int f1()
    {
        cout<<"In class student";
    }

};
int main()
    {
        student obj;
        cout<<"Recursive Function :"<<endl;
        obj.f1();
    }
