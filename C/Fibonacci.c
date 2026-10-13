#include<stdio.h>
int Fibonacci(int x){
	int y = 0, z = 1,f;
	for(int i=0
	;i<x;i++){
		printf("%d\t",y);
		f = y + z;
		y = z;
		z = f;
	}
}
int main(){
	int a;
	printf("Enter a rangefor Fibonacci Series : ");
	scanf("%d",&a);
	Fibonacci(a);
	return 0;
}