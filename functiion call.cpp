#include<iostream>
using namespace std;
float a,b,c;
int addition();
int subtraction();
int multiplication();
int division();
int main()
{
    float choice;
    cout<<"Enter two operands : \n";
    cin>>a>>b;
    cout<<"enter your choice number: \n";
    cout<<"1.Addition   2.Subtraction   3.Multiplication   4.division  \n";
    cin>>choice;


    if(choice==1)
        addition();
    else if(choice==2)
        subtraction();
    else if(choice==3)
        multiplication();
    else if(choice==4)
        division();



        cout<<"Result is :"<<c;

}

addition()
{

    c=a+b;
}
subtraction()
{
    c=a-b;
}
 multiplication()
{
    c=a*b;
}
division()
{
    c=a/b;
}




