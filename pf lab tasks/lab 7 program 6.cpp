#include<iostream>
using namespace std;
int main()
{
	string correctusername="admin";
    string correctpassword="12345";
     string username,password,role;
     cout<<"enter the username";
  cin>>username;
  cout<<"enter the password";
   cin>>password;
if(username==correctusername&&password==correctpassword)
{
	cout<<"Authentication sucessfully"<<endl;	
cout<<"enter your role(admin/guest/user/etc.):";
cin>>role;
	if(role=="admin")
	{
		cout<<"full access\n";
	}
	else if(role=="guest")
	{
		cout<<"limited access\n";
	}
	else
	{
		cout<<"no access\n";
	}
}
else
{
	cout<<"authentication failed.access denied\n";
}	
	return 0;
}
