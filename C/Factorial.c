#include<stdio.h>
int fact(int x){
	int fact = 1;
	for(int i=1;i<=x;i++){
		fact = fact * i;
	}
	return fact;
}
int main(){
	int a,b;
	printf("Enter a Number to Print Factorial for : ");
	scanf("%d",&a);
	b = fact(a);
	printf("Factorial is %d",b);
	return 0;
	
}