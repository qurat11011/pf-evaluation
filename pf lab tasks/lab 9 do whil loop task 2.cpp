#include<iostream>
using namespace std;
int main(){
	 int choice,subchoice,quantity;
	 double totalBill=0;
	 char orderMore;
	 do{
	 	cout<<"Resturant Menu\n";
	 	cout<<"1.Breakfast\n2.Lunch\n3.Dinner\n";
	 	cout<<"Enter your choice(1-3):";
	 	cin>>choice;
	 	switch(choice){
	 		case1:
	 			cout<<"breakfast Menu:\n";
	 			cout<<"1.Anda Paratha(Rs.40)\n2.Nan Channy(Rs.60)\n";
	 			cout<<"3.Siri Paye(Rs.150)\n4. Tea (Rs.15)\n";
	 		break;
	 		case 2:
	 			cout<<"lunch menu:\n";
	 			cout<<"1.Chicken Karahi(Rs.1050/kg)\n2.Mutton Karahi(Rs.1800/kg)\n";
	 			cout<<"3.Egg Fried Rice(Rs.450/plate)\n4.BBQ(Rs.1050/dozen\n";
	 		break;
	 		case 3:
	 			cout<<"Dinner Menu:\n";
	 			cout<<"1.Chicken Karahi(Rs.1050/kg)\n2.Mutton karahi(Rs.1800/kg)\n";
	 			cout<<"3.BBQ(Rs.1050/dozen)\n4.Saji(Rs.800/kg\n";
	 			break;
	 			default:
	 			cout<<"invalid choice!Try again.\n";
	 			continue;
	 			}
	 		cout<<"Enter your sub-menu choice:"	;
			cin>>subchoice; 
			cout<<"Enter quantity(kg/plate/dozen):";
			cin>>quantity;
			//calculate price based on selection
			switch(choice){
				case 1://breakfast 
				if(subchoice==1)
				totalBill+= 40*quantity;
				else if(subchoice==2)
				totalBill+=60*quantity;
				else if(subchoice==3)
				totalBill+=150*quantity;
				else if(subchoice==4)
				totalBill+=150*quantity;
				break;
				case 2://Lunch
				case 3://Dinner
				if(subchoice==1)
				totalBill+=1050*quantity;
				else if(subchoice==2)
				totalBill+=1800*quantity;
				else if(subchoice==3)
				totalBill+=450*quantity;
				else if(subchoice==4)
				totalBill+=1050*quantity;
				else if(choice==3&&subchoice==4)totalBill+=800*quantity;
				break;
			}
			cout<<"Do you want to ordermore?(yes/no)";
			cin>>orderMore;
		}
		while(orderMore=='y' || orderMore=='y');
		cout<<"total bill:Rs."<<totalBill<<endl;
		cout<<"thankyou for ordering!"<<endl;
		return 0;
	}
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
			
	 			
		 
	 
