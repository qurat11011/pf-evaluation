#include <iostream>
using namespace std;
int main(){
	int temperature;
	cout<<"enter the temperature";
	cin>>temperature;
	if(temperature>=40)
	cout<<"Extremely hot and dangerous for health";
	else if(temperature>=30&&temperature<=39)
	cout<<"Drink plenty of water to stay hydrated";
	else if(temperature>=20&&temperature<=29)
	cout<<"Weather is pleasent";
	else
	cout<<"Wear warm clothes to stay comfortable";
	return 0;
}