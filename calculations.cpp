#include<iostream>
using namespace std;
int main()
{
    float a,b,x,y,r,m,n,add,sub,multi,divis,area_of_rectangle,perimeter_of_rectangle,area_of_circle,circumference_of_circle,area_of_triangle;
    cout<<"enter any two numbers";
    cin>>a>>b;
    add=a+b;
    sub=a-b;
    multi=a*b;
    divis=a/b;
    cout<<"enter the length and bredth of rectangle";
    cin>>x>>y;
    area_of_rectangle=x*y;
    perimeter_of_rectangle=(2*x)+(2*y);
    cout<<"enter the radius of circle";
    cin>>r;
    area_of_circle=3.14286*r*r;
    circumference_of_circle=2*3.14286*r;
    cout<<"enter the length of height and base of triangle";
    cin>>m>>n;
    area_of_triangle=0.5*m*n;
     cout<<"the addition is\n"<<add<<"the subtraction is\n"<<sub<<"the multiplication is\n"<<multi<<"the division is\n"<<divis<<"the area of rectangle is\n"<<area_of_rectangle<<"the perimeter of rectangle is\n"<<perimeter_of_rectangle<<"the area of circle is\n"<<area_of_circle<<"the circumgerence of circle is\n"<<circumference_of_circle<<"the area of triangle is\n"<<area_of_triangle;
}
