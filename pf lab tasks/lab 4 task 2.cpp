# include <iostream>
using namespace std;
int main(){
	int age;
	cout<< "enter your age";
	cin>>age;
	(age>13)?cout<<"age"<<age<<" falls under the category : Child":
	(age>=13&&age<19)?cout<<"Age"<<age<<" falls under the category : Teenager ":		
	cout<<"Age"<<age<<"falls under the category : Adult";
	return 0;
}