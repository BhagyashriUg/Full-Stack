#include<stdio.h>
int main(){
	int a[] = {2,3,4,5};
	int b = sizeof(a)/4;
	for(int i=0;i<b;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}