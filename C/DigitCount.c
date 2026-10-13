
#include<stdio.h>
int main(){
	int a,count=0;
	printf("Enter a Number : ");
	scanf("%d",&a);
	while(a>0){
		a = a/10;
		count++;
	}
	printf("Count of Digit is : %d",count);
	return 0;
}