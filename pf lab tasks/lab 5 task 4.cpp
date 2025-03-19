#include <iostream>
using namespace std;
int main(){
	int grade;
	cout<<"enter the grade";
	cin>>grade;
	if(grade>=90)
	cout<<"A+";
	if(grade>=80&&grade<=89)
	cout<<"A";
	if(grade>=70&&grade<=79)
	cout<<"B";
	if(grade>=60&&grade<=69)
	cout<<"C";
	if(grade<60)
	cout<<"fail";
	return 0;
}