#include<stdio.h>
int main(){
	int a,b,i,j;
	printf("Enter Number of Rows : ");
	scanf("%d",&a);
	printf("Enter Number of Columns : ");
	scanf("%d",&b);
	int arr[a][b];
	printf("Enter Elements of Array :  ");
	for(i=0;i<a;i++){
		printf("\nRow %d\n",i+1);
		for(j=0;j<b;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Your Array is : \n");
	for(int k=0;k<a;k++){
		for(int l=0;l<b;l++){
			printf("%d\t",arr[k][l]);
		}printf("\n");
	}
	return 0;
}