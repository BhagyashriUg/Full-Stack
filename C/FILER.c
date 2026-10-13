#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp;
	char ch;
	
	fp = fopen("data1.txt","r");
	
	if(fp == NULL){
		printf("File Not Found");
		return 1;
	}
	while((ch = fgetc(fp))!=EOF){
		printf("%c",ch);
	}
	fclose(fp);
	return 0;
}