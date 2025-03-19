#include <iostream>
using namespace std;
int main(){

	int num;
	cout<<"enter the number whose factorial you want to print";
	cin>>num;
	int i=1;
	int factorial=1;
		for(;i<=num;i++){
	factorial*=i;}
	cout<<"factorial of"<<num<<"is :"<<factorial;
}




	
