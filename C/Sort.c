#include<stdio.h>
int main(){
	int a;
	printf("Enter size of array : ");
	scanf("%d",&a);
	int arr[a];
	for(int i=0;i<a;i++){
		printf("Enter Element No %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	int temp;
	for(int i=0;i<a;i++){
		for(int j=i+1;j<a;j++){
			if(arr[j]<arr[i]){
			temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp; 
		}
		}
	}
	
	for(int i=0;i<a;i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}