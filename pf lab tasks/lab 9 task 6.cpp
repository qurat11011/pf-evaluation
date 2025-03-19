#include<iostream>
#include<string>
using namespace std;
int main(){

  string correctPassword="bang01";
  string UserInput;
  do{
  	cout<<"Enter password:";
  	cin>>UserInput;
  	if(UserInput!=correctPassword){
  		cout<<"incorrect password,try again!"<<endl;
	  }
  }while(UserInput!=correctPassword);
  cout<<"access granted!"<<endl;
  return 0;
}
