#include<stdio.h>
int main(){
	int a;
	printf("Enter a Number : ");
	scanf("%d",&a);
	while(a!=0){
		printf("%d",a%10);
		a = a/10;
	}
	return 0;
}