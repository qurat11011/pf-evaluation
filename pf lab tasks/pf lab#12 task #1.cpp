#include<iostream>
using namespace std;

//	function to display welcme message
	void welcomeMessage()
	{
	   cout<<"hello!welcome to c++ function!"<<endl;
}
//function to check if a number is even or odd
	void checkEvenorOdd(int num)
	{
		if (num%2==0)
		{
			cout<<num<<"is even"<<endl;
		}
		else
		{
		cout<<num<<"is odd"<<endl;
		}
//		function to calculate factorial using loop
    int factorial(int n) 
 {
int fact=1;
    	for(int i=1;i<n;i++){
    		fact*=i;
    	}
		return fact;
	}
	int main(){
//		calling the welcome function
     welcomeMessage()
//     checking EvenorOdd
   int num;
   cout<<"enter  number to check Even or Odd";
   cin>>num;
   check EvenorOdd(num);
//  calculating factorial 
   int factNum;
   cout<<"enter a number to find its factorial:";
   cin>>factNum;
   cout<<"factorial of"<<factNum<<"is"<<factorial(factnum)<<endl;
   return 0;
	}
    
	
	
		
	
		
	
	
    
}