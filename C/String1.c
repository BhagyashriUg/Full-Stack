#include<stdio.h>
#include<string.h>
int main(){
	char arr[] = {"BHAGYASHRI"};
	int b = sizeof(arr);
	printf("%s\n",arr);

	for(int i=0;i<b;i++){
		printf("%c\n",arr[i]);
	}
	for(int j=b;j>=0;j--){
		printf("%c\n",arr[j]);
	}
	
	return 0;
}