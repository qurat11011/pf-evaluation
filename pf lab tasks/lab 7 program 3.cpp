#include<iostream>
using namespace std;
int main()
{
string correctusername="admin";
string correctpassword="12345";
string username,password;
cout<<"enter the username";
cin>>username;
cout<<"enter the password";
cin>>password;
if(username==correctusername&&password==correctpassword)
{
	cout<<"Access granted"<<endl;
}	
	if(username==correctusername&&password!=correctpassword)
	{
		cout<<"wrong password"<<endl;
	}
	else
	{
		cout<<"user not found."<<endl;
	}
return 0;		
}
