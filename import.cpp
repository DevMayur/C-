#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include<cstdio>

using namespace std;
string name;

int apply()
{
    fstream obj("student.csv", ios::in | ios::out | ios::app);
    if(!obj.is_open())  std::cout<<"File Open "<<endl;
    int avg,total,eng,mat,sci;
    string name;
    string n;
    string english;
    string math;
    string science;

 for(int i=0; i<5; i++)
    {
        getline(obj,name,',');
        n=name;
        getline(obj,english,',');
        getline(obj,math,',');
        getline(obj,science);
        eng=stoi(english);
        mat=stoi(math);
        sci=stoi(science);
        total=(eng+mat+sci);
        avg=total/3;
        cout<<n<<" Your total Marks are :"<<total<<"  Average marks are :"<<avg<<endl;


           fstream average;
        average.open("Final Marksheet.csv", ios::app);
        average<<"Name"<<","<<"English"<<","<<"Mathematics"<<","<<"Science"<<","<<"Average"<<endl;


        {
            average<<n<<","<<eng<<","<<mat<<","<<sci<<","<<avg<<endl;
        }


    }
   }
   int main()
   {
       /string response;
       cout<<"Do you Want to put data in Sheet?"<<endl;
       cout<<"Options: "<<endl<<"1. Yes "<<endl<<"2. No ";
       cin>>response;
       cout<<endl;
       if(response=="y"||response=="Y"||response=="yes"||response=="YES"||response=="Yes"||response=="1"        
	apply();
       getchar();

   }
