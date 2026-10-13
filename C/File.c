#include<stdio.h>
int main(){
	FILE *fp;
	fp = fopen("data1.txt","w");
	if(fp == NULL){
		printf("File Cannot be Opened");
		return 1;
	}
	fprintf(fp,"Hello Students\n");
	fprintf(fp,"File handling in c");
	fclose(fp);
	return 0;
	
}