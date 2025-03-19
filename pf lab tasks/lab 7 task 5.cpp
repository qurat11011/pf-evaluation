#include <iostream>
using namespace std;
int main(){
	int age;
	cout<<"enter yuor age";
	cin>>age;
	int income;
	cout<<"enter your income";
	cin>>income;
	if(age>=18){
	if(age>=18&&income>=30000)
	cout<<"congratulation! you are eligible for loan";
	if(age>=18&&income<30000)
	cout<<"you meet the age requirement but your income is low";}
	if(age<18&&income>=30000)
	cout<<"you are not eligible for loan because you are under 18";	

return 0;
}