#include<iostream>
#include<string>
using namespace std;
int main(){
	string correctPassward="adeela01";
	string userinput;
	do{
		cout<<"enter password:";
		cin>>userinput;
		if(userinput!=correctPassward){
		cout<<"incorret passward,try again!"<<endl;
		
		}
	}while(userinput!=correctPassward);
	cout<<"Access granted!"<<endl;
	return 0;
	
}
