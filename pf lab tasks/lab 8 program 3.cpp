#include<iostream>
using namespace std;
int main()
{
	int choice;
	double area,radius,length,width,base,height;
	cout<<"select a shape to calculate area\n";
	cout<<"1.circle\n2.rectangle\n2.triangle\n";
	cout<<"enter your choice(1-3):";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"enter radius";
			cin>>radius;
			area=3.14159*radius*radius;
			cout<<"area of circle"<<area<<endl;
			break;
			case 2:
				cout<<"enter length and width:";
				cin>>length and width;
				area=length*width;
				cout<<"area of rectangle:"<<area<<endl;
				break;
				case 3:
					cout<<"enter base and height:";
					cin>>base>>height;
					area=0.5*base*height;
					cout<<"area of triangle"<<area<<endl;
					break;
					default:
						cout<<"error:invalid choice! please select 1,2,3,"<<endl;
	}
	return 0;
}
