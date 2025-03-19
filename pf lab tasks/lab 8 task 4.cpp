#include <iostream>
using namespace std;
int main(){
	int choice;
	cout<<"convert USD to other currencies";
	cin>>choice;
	int USD;
	cout<<"enter the USD";
	cin>>USD;
	
	switch(choice){
		case 1:
			cout<<'PKR'<<278<<"*"<<USD<<"="<<278*USD;
						break;
			case 2:
				cout<<'INR'<<150<<"*"<<USD<<"="<<150*USD;
				break;
				case 3:
					cout<<'Euros'<<300<<"*"<<USD<<"="<<300*USD;
					break;
					default:
					cout<<"invalid";
					break;
	}
}