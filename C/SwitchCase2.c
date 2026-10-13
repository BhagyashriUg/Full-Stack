#include<stdio.h>
int main(){
	int a,b,option;
	printf("Enter Number 1 : ");
	scanf("%d",&a);
	printf("Enter Number 2 : ");
	scanf("%d",&b);
	printf("1. Addition\t2. Subtraction\t 3. Multiplication\t4. Division");
	printf("\nEnter Operation Number to be Performed : ");
	scanf("%d",&option);
	
	
	
	switch(option){
		case 1:
			printf("%d + %d = %d",a,b,a+b);
			break;
		case 2:
			printf("%d - %d = %d",a,b,a-b);
			break;
		case 3:
			printf("%d * %d = %d",a,b,a*b);
			break;
		case 4:
			printf("%d / %d = %d",a,b,a/b);
			break;
		default:
			printf("Invalid Input");
	}
}