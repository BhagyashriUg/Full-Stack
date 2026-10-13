#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char temp[100];
	char *name;
	printf("Enter Your Full Name : ");
	fgets(temp,100,stdin);//Read into Temporary buffer
	temp[strcspn(temp,"\n")] = 0;//remove newline character strcspn-> string call span
	
	//Allocate exactly the length of the strin + 1 for the nill terminator'\0'
	name=(char*)malloc ((strlen(temp)+1)*sizeof(char));
	
	if(name!=NULL){
		strcpy(name,temp);//copy from temp our perfectly sized dynamic memory
		printf("Stored name : %s (Length : %u bytes)\n",name,(unsigned int)strlen(name));
	}
	free(name);
	return 0;
}