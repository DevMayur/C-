#include<iostream>
using namespace std;
int main()
{
    char ch;

    cout<<"Enter a Letter to check it is vowel or not:"<<"\n";
    cin>>ch;

    switch(ch)
    {
    case'a':
    case'A':
    case'e':
    case'E':
    case'i':
    case'I':
    case'o':
    case'O':
    case'u':
    case'U':
        cout<<"Given Letter is a vowel";
        break;
    default:
        cout<<"Given number is not vowel";
    }
    return 0;
}
