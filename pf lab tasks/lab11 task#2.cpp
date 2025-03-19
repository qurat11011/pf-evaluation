#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number of elements:";
	cin>>n;
	int arr[n];
	cout<<"enter "<<n<<"elements:";
	for (int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	cout<<"array in reverse order:";
	for(int i=n-1;i>=0;i--){
		cout<<arr[i]<<" ";
}
   cout<<endl;
   return 0;
	}
	