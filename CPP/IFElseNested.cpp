#include<iostream>
using namespace std;
int main(){
	//	NESTED IF-ELSE CODE
	int nationality,age;
	cout<<"\nAre You Indian 1 . Yes\t2.No : ";
	cin>>nationality;
	if(nationality == 1){
		cout<<"Enter Your Age : ";
		cin>>age;
		if(age<18){
			cout<<"Your are not eligible to Vote";
		}
		else{
			cout<<"You are eligible to Vote";
		}
	}
	else{
		cout<<"You are not eligible to Vote";
	}
	return 0;
}