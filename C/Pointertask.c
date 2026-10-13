#include<stdio.h>
void change(int *b){
	*b = 20;
}
int main(){
	int a = 10;
	printf("Before : %d\n",a);
	change(&a);
	printf("After : %d",a);
	return 0;
}

