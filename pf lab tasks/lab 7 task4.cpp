#include <iostream>
using namespace std;
int main(){
	int percentage;
	cout<<"enter your percentage";
	cin>>percentage;
	int percentageinenglish;
	cout<<"enter percentage in english";
	cin>>percentageinenglish;
	int percentageinphysics;
	cout<<"enter percentage in physics";
	cin>>percentageinphysics;
	int percentageinmath;
	cout<<"enter percentage in math";
	cin>>percentageinmath;
	int mark;
	cout<<"enter total mark";
	cin>>mark;
	if(percentageinphysics>=90)
	cout<<"gradeA";
	else if(percentageinphysics>=80&&percentageinphysics<90)
	cout<<"gradeB";
	else if(percentageinphysics>=70&&percentageinphysics<80)
	cout<<"gradeC";
	else if(percentageinphysics>=60&&percentageinphysics<70)
	cout<<"gradeD";
	else
	cout<<"gradeF";
		if(percentageinenglish>=90)
	cout<<"gradeA";
	else if(percentageinenglish>=80&&percentageinenglish<90)
	cout<<"gradeB";
	else if(percentageinenglish>=70&&percentageinenglish<80)
	cout<<"gradeC";
	else if(percentageinenglish>=60&&percentageinenglish<70)
	cout<<"gradeD";
	else
	cout<<"gradeF";
	if(percentageinmath>=90)
	cout<<"gradeA";
	else if(percentageinmath>=80&&percentageinmath<90)
	cout<<"gradeB";
	else if(percentageinmath>=70&&percentageinmath<80)
	cout<<"gradeC";
	else if(percentageinmath>=60&&percentageinmath<70)
	cout<<"gradeD";
	else
	cout<<"gradeF";
	if(percentage>=90&&mark>=270)
	cout<<"eligible for merit scholarship";
	else if(percentage>=80&&percentage<90&&mark>=240)
	cout<<"regular scholarship";
	else
	cout<<"no scholarship";
	return 0;
	}
