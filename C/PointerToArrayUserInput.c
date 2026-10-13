#include<stdio.h>
int main(){
	int a;
	printf("Enter Number of Elements You want in array : ");
	scanf("%d",&a);
	int arr[a] , *ptr;
	ptr = arr;
	for(int i=0;i<a;i++){
		printf("Enter Element No %d : ",i+1);
		scanf("%d",&ptr[i]);
		//scanf("%d",ptr+i);
	}
	printf("\nGiven Elements are :\n");
	for(int i=0;i<a;i++){
		printf("%d\n",*(ptr+i));
	}
	return 0;
}
