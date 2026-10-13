#include<stdio.h>
int main(){
	int i=10,a,b;
	printf("Enter Number to print table of : ");
	scanf("%d",&a);
	while(i>=1){
		b = a*i;
		printf("%d * %d = %d\n",a,i,b);
		i--;
	}
	return 0;
}