#include<stdio.h>
int main(){
	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int *ptr = *arr;//Refers to the value at the Address of First Element of Array
//	int *ptr = &arr; Refers to the address of First Element of Array
	for(int i=0;i<9;i++){
		printf("%d\t",*(ptr+i));
	}
	return 0;	
}