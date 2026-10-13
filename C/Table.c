#include<stdio.h>
int main(){
	int a,i=1,b;
	printf("Enter a Number to print table of : ");
	scanf("%d",&a);
	
	while(i<=10){
		b = a*i;
		printf("%d * %d = %d\n",a,i,b);
		i++;
	}
	return 0;
}