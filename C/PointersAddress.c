#include<stdio.h>
int main(){
	int a = 10;
	int *p = &a;
	int **q = &p;
	printf("%d\n",a);//value of a
	printf("%d\n",&a);//variable address
	printf("%d\n",p);//variable address
	printf("%d\n",&p);//pointer p address
	printf("%d\n",*p);//variable value
	printf("%d\n",q);//pointer p address 
	printf("%d\n",&q);//pointer q address
	printf("%d\n",*q);//variable address
	printf("%d\n",**q);	//variable value
	return 0;
}