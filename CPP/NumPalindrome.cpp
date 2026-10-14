#include<iostream>
using namespace std;
int main(){
	int num,revnum = 0,temp;
	cout<<"Enter a Number to check palindrome for : ";
	cin>>num;
	int temp1 = num;
	for(int i=0;i<10;i++){
		temp = temp1%10;
		temp1=temp1/10;
		revnum = (revnum*10)+temp;
	}
	if(num==revnum){
		cout<<"Number is Palindrome";
	}
	else{
		cout<<"Number is Not Palindrome";
	}
}