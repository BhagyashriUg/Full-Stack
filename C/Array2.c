#include<stdio.h>
int main(){
	int n, arr[n], arr2[n];
	printf("Enter size of Array : ");
	scanf("%d",&n);
	printf("Enter Elements of array : ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nThe Second Array Values are : ");
	for(int i=0;i<n;i++){
		arr2[i] = arr[i]*2;
		printf("%d\n",arr2[i]);
	}
	return 0;
}


