#include<stdio.h>
int main(){
	int a,rev=0;
	printf("Enter a Number : ");
	scanf("%d",&a);
	int c=a;
	
	while(c != 0){
		rev = rev * 10 
		
		
		+ (c%10);
		c = c/10; 
	}
	if(a==rev){
		printf("Number is Palindrome");
	}
	else{
		printf("Number is not Palindrome");
	}
	
}