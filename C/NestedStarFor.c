#include<stdio.h>
int main(){
	int i,j,k;
	for(i=1;i<=3;i++){
		for(j=1;j<=5;j++){
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i=1;i<=4;i++){
		for(j=1;j<=3;j++){
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i=0;i<=5;i++){
		for(j=i;j<=4;j++){
			printf("*");
		}
		printf("\n");
	}
		
	for(i=1;i<=5;i++){
		for(j=i;j<=5;j++){
			printf(" ");
		}
		for(k=j;k<=i+5;k++){
			printf("*");
		}
		printf("\n");
	}
}