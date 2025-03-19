#include<iostream>
using namespace std;
char calculategrade(int marks);
int main()
{
	int subject1,subject2,subject3;
//	input marks for three subjects
	cout<<"enter marks for subject 1:";
	cin>>subject1;
	cout<<"enter marks for subject 2:";
	cin>>subject2;
	cout<<"enter marks for subject 3:";
	cin>>subject3;
//	calculate totalmarks and percentage
	int totalmarks=subject1+subject2+subject3;
	float percentage=(totalmarks/3);
//	determine grade for each subject
	char grade1=
	calculategrade(subject1);
		char grade2=
	calculategrade(subject2);
		char grade3=
	calculategrade(subject3);
//	display grades;
	cout<<"\ngrades:\n";
	cout<<"subject1:"<<grade1<<endl;
		cout<<"subject2:"<<grade2<<endl;
	cout<<"subject3:"<<grade3<<endl;
//	check if student has failed
	if(grade1=='F'||grade2=='F'||grade3=='F')
	{
		cout<<"\nresult:failed\n";
	}
//	display total marks and percentage
cout<<"total marks is "<<totalmarks<<endl;
cout<<"the percentage is :"<<percentage<<endl;
//check scholarship eligibility
	if(grade1=='A'&&grade2=='A'&&grade3=='A'&&totalmarks>=270)
{
	cout<<"eligible for merit scholarship\n";
}	
	else if(grade1=='B'&&grade2=='B'&&grade3=='B'&&totalmarks>=240)
{
	cout<<"eligible for regular  scholarship\n";
}	
else
{
	cout<<" not eligible for any scholarship";
}
return 0;
}
char calculategrade(int marks)
{
	if(marks>=90)
	return 'A';
	else if(marks>=80)
	return 'B';
		else if(marks>=70)
	return 'C';
		else if(marks>=60)
	return 'D';
	else 
	return 'F';
}
