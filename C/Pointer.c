#include<stdio.h>
int main(){
	int a = 10;
	int *ptr;
	ptr = &a;
	printf("%d",a);
	printf("\n%d",ptr);
	printf("\n%d",&a);
	printf("\n%d",*ptr);
	*ptr = 20;
	printf("\n%d",a);
	return 0; 
}