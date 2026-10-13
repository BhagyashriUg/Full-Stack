#include<stdio.h>
int main(){
	int a;
	printf("Enter Your Percentage : ");
	scanf("%d",&a);
	
	if(a>100){
		printf("Invalid Percentage");
	}
	else if(a>=75){
		printf("Grade A");
	}
	else if(a>=55){
		printf("Grade B");
	}
	else if(a>=35){
		printf("Grade C");
	}
	else{
		printf("Failed");
	}
	return 0;
}