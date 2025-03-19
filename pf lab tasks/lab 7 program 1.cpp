#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter the number"<<endl;
	cin>>num;
	if(num>0)
	{
		cout<<"the number"<<num<<"is positive"<<endl;
	}
	else if(num<0)
	{
		cout<<"the number"<<num<<"is negtive"<<endl;
	}
	else
	{
		cout<<"the number is zero"<<endl;
	}
	return 0;
} 
