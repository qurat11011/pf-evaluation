#include <iostream>
using namespace std;
int main(){
	int depositmoney;
	cout<<"deposit money to account";
	cin>>depositmoney;
	int widthdrawalmoney;
	cout<<"deduct a amount from your account balance";
	cin>>widthdrawalmoney;
	int i=1000;
	int currentbalance=depositmoney;
	while(currentbalance<i){
	cout<<"invalid! try again";
	cin>>currentbalance;}
	cout<<"congratulation widthdrawal successful"<<endl;
	cout<<"remaining balance";
	cout<<"="<<currentbalance<<"-"<<widthdrawalmoney<<"="<<currentbalance-widthdrawalmoney;
	i++;
}