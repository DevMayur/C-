#include<iostream>
#include<string>
using namespace std;
int main()
{
    string input;
    cout<<"What is your name ?"<<endl;
    getline(cin, input);
    cout<<"Hello "<<input<<", Welcome to getline function";
    return 0;
}
