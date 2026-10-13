#include<stdio.h>
int fact(int x){
	if(x<=1){
		return 1;
	}
	return x*fact(x-1);
}
int main(){
	int a;
	printf("Enter a Number : ");
	scanf("%d",&a);
	printf("Factorial is : %d",fact(a));
	return 0;
}