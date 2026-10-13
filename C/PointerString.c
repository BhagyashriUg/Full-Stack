#include<stdio.h>
int main(){
	char *arr[] = {"ABC" , "DFG" , "HIJ"};
	// char arr[][] = {...};
	//char *ptr = arr;
	printf("%s",*arr);
	printf("\n%d",arr+1);
	printf("\n%s",*(arr+2));
	printf("\n%s",*arr+2);
	printf("\n%s",*(arr+1)+2);
 	return 0;
}