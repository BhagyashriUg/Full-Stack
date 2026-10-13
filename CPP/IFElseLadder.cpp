#include<iostream>
using namespace std;
int main(){
	
	
	int percentage;
	cout<<"Enter Your Percentage : ";
	cin>>percentage;
	if(percentage>100){
		cout<<"Invalid Percentage";
	}
	else if(percentage<=100 && percentage>=90){
		cout<<"Congratulations You've Passed With Distinction";
	}
	else if(percentage>=75 && percentage<90){
		cout<<"Congratulations You've Passed with A Grade";
	}
	else if(percentage>=50 && percentage<75){
		cout<<"Congratulations You've Passed with B Grade";
	}
	else{
		cout<<"Failed";
	}
	return 0;
}