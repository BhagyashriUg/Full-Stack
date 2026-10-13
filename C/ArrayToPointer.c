#include<stdio.h>
int main(){
	int a = 10, b = 20, c = 30;
	int *arr[] = {&a,&b,&c};
	
	for(int i=0;i<=2;i++){
		printf("\n%u\n",*(*(arr+i)));
	}
//	int *ptr = arr[2];
//	for(int i=2;i>=0;i--){
//		printf("%d\n",ptr[i]);
//	}
	
//	int *p;
//	printf("\nThrough Address :\n\n");
//	for(int i=2;i>=0;i--){
//		p = &ptr[i];
//		printf("%u\n",(*p));
//	}

	

	return 0;
}