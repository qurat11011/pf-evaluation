#include<iostream.>
using namespace std;
int main()
{
	int choice;
	double usdammount,convertedammount;
	const double usd_to_pkr=277.50;
	const double usd_to_inr=83.20;
	const double usd_to_euro=0.92;
	cout<<"currency converter(usd to pkr,inr,euro)\n";
	cout<<"enter ammount in usd:";
	cin>>usdammount;
	cout<<"choose the currency to convert to\n:";
	cout<<"1.pakistani rupees(pkr)\n";
	 cout<<"2.indian rupees(inr)\n";
	cout<<"3.euros(eur)\n";
	cout<<"enter your choice(1-3)";
	cin>>choice;
	switch(choice)
	{
		case 1:
			convertedammount=usdammount*usd_to_pkr;
			cout<<usdammount<<"usd="<<convertedammount<<"pkr\n";
			break;
			case 2:
			convertedammount=usdammount*usd_to_inr;
			cout<<usdammount<<"usd="<<convertedammount<<"inr\n";
			break;
		case 3:
			convertedammount=usdammount*usd_to_euro;
			cout<<usdammount<<"usd="<<convertedammount<<"eur\n";
			break;
		default:
			cout<<"invalid choice!please select 1,2 or 3.\n";
	}
	return 0;
}
