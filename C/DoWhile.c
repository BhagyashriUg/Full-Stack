#include<stdio.h>
int main(){
	int a;
	
		do{
			printf("Enter a positive number : ");
			scanf("%d",&a);
		}while(a<0);
		printf("Thank You for Entering Positive Number");
		return 0;
}