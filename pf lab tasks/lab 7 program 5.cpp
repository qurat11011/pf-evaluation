#include<iostream>
using namespace std;
int main()
{
	int age;
	double income;
	cout<<"enter your age";
	cin>>age;
	cout<<"enter your annual income";
	cin>>income;
	if(age>=18)
	{
	if(income>=30000)
	{
		cout<<"congraulations!you are eligible for loan"<<endl;
	}	
		else 
		{
			cout<<"you meet the age requirement but are not eligible bcz the income below than $30000"<<endl;
		}
	}
	else
	{
		cout<<"you are not eligible for a loan bcz you are under 18 years of old"<<endl;
	}
		return 0;
}
