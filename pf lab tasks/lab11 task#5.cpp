#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number of elements:";
	cin>>n;
	int arr[n];
	cout<<"enter"<<n<<"elements:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int largest=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>largest){
			largest=arr[i];
		}
	}

   cout<<"largest number:"<<largest<<endl;
   return 0;
 }