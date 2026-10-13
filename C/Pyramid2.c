#include<stdio.h>
int main(){
	int a,i,j,k;
	printf("Enter Number of Rows : ");
	scanf("%d",&a);
	for(i=0;i<a;i++){
		for(k=a*2;k>=i*2;k--){
			printf(" ");
		}
		for(j=0;j<=i*2;j++){
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}