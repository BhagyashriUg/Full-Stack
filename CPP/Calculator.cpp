#include<iostream>
using namespace std;
void Add(int a,int b){
	cout<<"Addition is : "<<a+b;
}
void Sub(int a,int b){
	cout<<"Substraction is : "<<a-b;
}
void Mul(int a,int b){
	cout<<"Multiplication is : "<<a*b;
}
void Div(int a,int b){
	cout<<"Division is : "<<a/b;
}
void Mod(int a,int b){
	cout<<"Modulus is : "<<a%b;
}

int main(){
	int a,b;
	char opr;
	cout<<"Enter Number 1 : ";
	cin>>a;
	cout<<"Enter Number 2 : ";
	cin>>b;
	cout<<"Enter Your Choice of Operation : + , - , * , / , % : ";
	cin>>opr;
	switch(opr){
		case '+':
			Add(a,b);
			break;
		case '-':
			Sub(a,b);
			break;
		case '*':
			Mul(a,b);
			break;
		case '/':
			Div(a,b);
			break;
		case '%':
			Mod(a,b);
			break;
		default:
			cout<<"Unknown Input";
	}
	return 0;
}