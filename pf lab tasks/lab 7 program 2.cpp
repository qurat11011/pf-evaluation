#include<iostream>
using namespace std;
int main()
{
	float temp;
	cout<<"enter the temperature in C:";
	cin>>temp;
	if(temp>=40)
	{
		cout<<"it is extremely hot! stay indoors to avoid heat related issue"<<endl;
	}	
	else if(temp>=30&&temp<=39)
	{
		cout<<"the weather is hot.drink plenty of water to hydrate"<<endl;
	}
	else if(temp>=20&&temp<=29)
	{
		cout<<"the weather is pleasent .its a good time for outdoor activities"<<endl;
	}
	else
	{
		cout<<"its a cold. wear warm clothes to stay comfortable"<<endl;
	}
	return 0;
}
