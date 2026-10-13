#include<stdio.h>
int main(){
	char *Names[] = {"Aditi","Priyanka"};
	for(int i=0;i<2;i++){
		printf("%s\n",*(Names+i));
	}
	printf("\n%s",(*Names));// prints name at index 1
	printf("\n%s",(*Names+2));//prints string of index one element from the +2 leaving the first 2 characters
	printf("\n%c",*(*Names+1));// prints the character by pointing to first element then the characters of first element
	return 0;
}



