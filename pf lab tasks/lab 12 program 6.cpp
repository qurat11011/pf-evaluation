#include<iostream>
#include<iomanip>
using namespace std;
void displaymenu()
{
	cout<<"restaurant menu"<<endl;
	cout<<"1.burger	     	-$5.99"<<endl;
	cout<<"2.pizza  	    -$8.99"<<endl;
	cout<<"3.pasta		    -$7.99"<<endl;
	cout<<"4.salad		    -$5.99"<<endl;
	cout<<"5.sandwich		-$6.99"<<endl;
	cout<<"6.exit"<<endl;
}
double calculateitemcost(double price,int quantity)
{
	return price*quantity;
}
double calculatefinalbill(double total)
{
	double servicecharge=total*0.10;
	return total+servicecharge;
}
int main()
{
int choice,quantity;
double totalbill=0.0;
while(true)
{
	displaymenu();
	cout<<"enter the number of the item you want to order(1-6):";
	cin>>choice;
	if(choice==6)
	{
		break;
	}
	if(choice<1||choice>5)
	{
		cout<<"invalid choice!please select the valid item\n";
		continue;
	}
	cout<<"enter the quantity";
	cin>>quantity;
	double price[]={5.99,8.99,7.49,4.99,6.49};
	double itemcost=calculateitemcost(price[choice-1],quantity);
	totalbill+=itemcost;
	cout<<"added to bill:$"<<fixed<<setprecision(2)<<itemcost<<"\n";
}
if(totalbill>0)
{
	double finalamount=calculatefinalbill(totalbill);
	cout<<"\n=============finalbill============"<<endl;
	cout<<"total before tax:$"<<fixed<<setprecision(2)<<totalbill<<endl;
	cout<<"total after 10% service charge:$"<<finalamount<<endl;
	cout<<"====================\n";
}
else
	{
		cout<<"no items ordered. thank you for visiting!\n";
	}
	return 0;
}	
	
	
	
	
	
	

