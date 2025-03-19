#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number of elements:";
	cin>>n;
	int arr[n],sum=0;
	cout<<"enter "<<n<<"elements:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
		
	}
	double average=(double)sum/n;
	cout<<"sum:"<<sum<<endl;
	cout<<"average:"<<average<<endl;
	return 0;
}