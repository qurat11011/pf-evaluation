#include <iostream>
using namespace std;
int main(){
	int accbalance, widthdrawalamount;
	cout<<"enter your account balance";
	cin>>accbalance;
	cout<<"enter your widthdrawal amount";
	cin>>widthdrawalamount;
	if(widthdrawalamount<=accbalance)
	cout<<"amount is deducted from balance remaining balance==7000";
	else
	cout<<"insufficent balance";
	
}