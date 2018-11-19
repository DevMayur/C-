#include<iostream>
#include<string>
#include<fstream>
#include <sstream>

using namespace std;



class CreateAccount
{
	public:
	int Account_Balance;
	string name,Account_no;
	void CreateAc(string s)
	{
		cout<<"Enter your name :"<<endl;
		getline(cin,name);
		fstream fos;
		fos.open(s , ios::in | ios::out | ios::app);
		fos<<"0";
	}
};

class ReadBalance
{
	public:
	int readbalance(string s)
	{
		fstream fin;
		fin.open(s);
		string readbalancestring;
		fin>>readbalancestring;
		int balance;
		stringstream objconvert(readbalancestring);
		objconvert>>balance;
		//balance = stoi(readbalancestring);
		return balance;
	}
};

int main()
{
	
	ReadBalance objr;
	CreateAccount objc;
	cout<<"Enter Account Number";
	getline(cin, objc.Account_no);
	cout<<"Select a choice -"<<endl<<"1.Create Account"<<endl<<"2.Withdraw Money"<<endl<<"3.Deposite Money"<<"4.Check Balance"<<endl;
	string choice;
	getline(cin, choice);
	if (choice == "1")
	{
		objc.CreateAc(objc.Account_no);
	}
	else if(choice == "2")
	{
		cout<<"Your balance is"<<objr.readbalance(objc.Account_no)<<endl;
		cout<<"Enter amount to withdraw : "<<endl;
		string withdraw_amount_string;
		getline(cin, withdraw_amount_string);
		stringstream objconvert(withdraw_amount_string);
		int withdraw_amount;
		objconvert>>withdraw_amount;
		//int withdraw_amount = stoi(withdraw_amount_string);
		int final_amount = objr.readbalance(objc.Account_no) - withdraw_amount;
		string final_amount_string = to_string(final_amount);
		fstream fos;
		fos.open(objc.Account_no , ios::in | ios::out );
		fos<<final_amount_string;
	}
	else if(choice == "3")
	{
		cout<<"Your balance is"<<objr.readbalance(objc.Account_no)<<endl;	
		cout<<"Enter amount to deposite : "<<endl;
		string deposite_amount_string;
		getline(cin, deposite_amount_string);
		stringstream objconvert(deposite_amount_string);
		int deposite_amount;
		objconvert>>deposite_amount;
		//int deposite_amount = stoi(deposite_amount_string);
		int final_amount = objr.readbalance(objc.Account_no) + deposite_amount;	
		string final_amount_string = to_string(final_amount);
		fstream fos;
		fos.open(objc.Account_no , ios::in | ios::out );
		fos<<final_amount_string;
	}
	else
	{
		cout<<"Your balance is"<<objr.readbalance(objc.Account_no)<<endl;
	}
	return 0;
	
}