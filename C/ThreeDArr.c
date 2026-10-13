#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter Depth of Array : ");
	scanf("%d",&a);
	printf("Enter Number of Rows : ");
	scanf("%d",&b);
	printf("Enter Number of Columns : ");
	scanf("%d",&c);
	int arr[a][b][c];
	for(int i=0;i<a;i++){
		printf("Matrix %d : \n",i+1);
		for(int j=0;j<b;j++){
			printf("Row %d : ",j+1);
			for(int k=0;k<c;k++){
				scanf("%d",&arr[i][j][k]);
			}
		}
	}
	printf("Your Given Array is  : \n");
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			for(int k=0;k<c;k++){
				printf("%d\t",arr[i][j][k]);
			}printf("\n");
		}printf("\n");
	}
}