#include <iostream>
using namespace std;
int main(){
	int salary;
	cout<<"enter the  salary";
	cin>>salary;
	int  service;
	cout<<"enter the  service";
	cin>>service;
	if(service>=10)
	cout<<"10% bonus";
	if(service>=5&service<=9)
	cout<<"5% bonus";
	if(service<5)
	cout<<"no bonus";
	if(salary>40000)
	cout<<"20% tax is deducted";
	if(salary>=30000&&salary<=40000)
	cout<<"10% tax is deducted";
	if(salary<30000)
	cout<<"no tax";
	return 0;
}