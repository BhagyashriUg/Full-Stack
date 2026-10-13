#include<stdio.h>
int add(int x){
	return x+=100;
}
int main(){
	int x = 50;
	printf("%d\n",x);
	printf("%d\n",add(x));
	printf("%d",x);
	return 0;
}