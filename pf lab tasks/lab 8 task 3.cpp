#include <iostream>
using namespace std;
int main(){
	int shape;
	cout<<"enter the shape";
	cin>>shape;
	switch(shape){
		case 'circle':
			cout<<"area is PIr*r";
			break;
			case 2:
				cout<<" area is length*breadth";
				break;
				case 3:
					cout<<"area is 1/2(length*width)";
					break;
					default:
						cout<<"invalid";
						break;										
	}
	return 0;
}