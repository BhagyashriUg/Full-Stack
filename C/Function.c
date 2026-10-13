#include<stdio.h>
void add(int a,int b){
	printf("Addition is : %d",a+b);
}
void sub(int a,int b){
	printf("Subtraction is : %d",a-b);
}
void mul(int a,int b){
	printf("Multiplication is : %d",a*b);
}
void div(int a,int b){
	printf("Division is : %d",a/b);
}
void mod(int a,int b){
	printf("Modulus is : %d",a%b);
}
int main(){
	int a,b;
	char choice;
	printf("Enter Two numbers : ");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("Enter Your Choice of Operation (+,-,*,/,%) : ");
	scanf(" %c",&choice);
	switch(choice){
		case '+':
			add(a,b);
			break;
		case '-':
			sub(a,b);
			break;
		case '*':
			mul(a,b);
			break;
		case '/':
			div(a,b);
			break;
		case '%':
			mod(a,b);
			break;
		default:
			printf("Invalid Choice");
			break;	
	}
	return 0;
}