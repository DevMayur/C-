#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    string name,choice[10];
    ofstream pole;
        pole.open("student.csv");   // Use .txt format for text file

        for(int i=0; i<10; i++)
        {
        cout<<"Enter your name :"<<endl;
        getline(cin, name);
        cout<<"Do you want Wifi Service?"<<endl;
        getline(cin, choice[i]);

        pole<<name<<","<<choice[i]<<endl;
        }
    return 0;
}
