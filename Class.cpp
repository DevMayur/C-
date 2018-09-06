#include<iostream>
using namespace std;

class ABC
{
    public:
    void getdata()
    {
        cout<<"We are in Class ABC"<<endl;
    }
    void putdata()
    {
        cout<<"Called putdata ";
    }
};

int main()
{
    ABC obj;
    obj.getdata();
    obj.putdata();
    return 0;
}

