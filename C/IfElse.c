#include<stdio.h>
int main(){
	int a;
	printf("Enter a Number : ");
	scanf("%d",&a);
	if(a>=0){
		printf("Number is positive");
	}
	else{
		printf("Number is Negative");
	}
	return 0;
}