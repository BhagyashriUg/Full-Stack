#include<stdio.h>
int main(){
	char str1[100],str2[100];
	printf("Enter a String : ");
	scanf("%s",&str1);
	strcpy(str2,str1);
	strrev(str2);
	int x = strlen(str1);
	
	for(int i=0;i<x;i++){
		if(str1[i] == str2[i]){
		}
		else{
			printf("String is not Palindrome");
			return;
		}
	}
	printf("String is Palindrome");
	return 0;
}