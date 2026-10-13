#include<stdio.h>
int main(){
	int a,b,c,d,e,f,g;
	printf("Enter value for a : ");
	scanf("%d",&a);
	printf("Enter value for b : ");
	scanf("%d",&b);
	c = a + b;
	printf("Addition of a and b is : %d\n",c);
	d = a-b;
	printf("Substraction of a and b is : %d\n",d);
	e = a*b;
	printf("Multiplication of a and b is : %d\n",e);
	f = a/b;
	printf("Division of a and b is : %d\n",f);
	g = a%b;
	printf("Remainder is : %d",g);
	return 0;
}
