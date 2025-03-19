#include <iostream>
using namespace std;
int main(){
	int number1;
	cout<<"enter num1";
	cin>>number1;
	int number2;
	cout<<"enter num2";
	cin>>number2;
	int number3;
	cout<<"enter num3";
	cin>>number3;
	if(number1>number2?cout<<"number1 is largest":cout<<"number2 is greater");
	if(number2>number3?cout<<"number2 is largest":cout<<"number3 is largest");
}