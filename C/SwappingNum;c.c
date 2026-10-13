#include<stdio.h>
int main(){
	int a = 5, b = 10;
	printf("Before : a : %d , b : %d",a,b);
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("\nAfter : a : %d , b : %d",a,b);
	return 0;
}