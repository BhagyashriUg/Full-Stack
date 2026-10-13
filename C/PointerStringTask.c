#include<stdio.h>
int main(){
	char *arr[] = {"ABCD","EFGH","IJKL","OPQR"};
	int d = sizeof(arr)/2,k;
	for(int i=0;i<4;i++){
		printf("\n%s",*(arr+i));
	}
	
	printf("\n\n");
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%c ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}