#include<iostream>
#include<string>
#include<fstream>
#include<cstdio>
using namespace std;
int main()
{
    string name,eng,math,science;
    ofstream marks;
    marks.open("student.csv");
    //marks<<"Name"<<","<<"English"<<","<<"math"<<","<<"science"<<endl;

    for(int i=0; i<5; i++)
    {
        cout<<"Enter your name :";
        getline(cin, name);
        cout<<"Enter Marks obtained in Subjects given :"<<endl;
        cout<<"English: "<<endl;
        getline(cin, eng);
        cout<<"Math: "<<endl;
        getline(cin, math);
        cout<<"Science: "<<endl;
        getline(cin, science);
        marks<<name<<","<<eng<<","<<math<<","<<science<<endl;
    }
    getchar();
    return 0;

}
