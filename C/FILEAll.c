#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp, *fp2;
	char ch,str[100];
	int num;
	
/*---------------------------------------write using fprintf-------------------------------------*/
	fp = fopen("demo.txt","w");
	if(fp == NULL){
		printf("Error Operating Files\n");
		exit(1);
	}
	
	fprintf(fp,"Hello Students\n");
	fprintf(fp,"Number : %d\n",123);
	fputs("This Line is Written using fputs\n",fp);
	fputc('A',fp);
	fclose(fp);
	
/*---------------------------------------Read using fgetc-------------------------------------------*/
	printf("\nReading character by character : \n");
	fp = fopen("demo.txt","r");
	
	while((ch = fgetc(fp))!=EOF){
		putchar(ch);
	}
	fclose(fp);
	
/*---------------------------------------Read using fscanf-------------------------------------------*/

	printf("\nReading using fscanf : \n");
	fp = fopen("demo.txt","r");
	
	fscanf(fp,"%s %s",str,str);//Read First Two Words
	printf("First Words : %s\n",str);
	fclose(fp);

/*-------------------------------------Read Using fgets-----------------------------------*/
	printf("\n Reading lines using fgets:\n");
	fp = fopen("demo.txt","r");
	
	while(fgets(str,sizeof(str),fp)!=NULL){
		printf("%s",str);
	}
	fclose(fp);
	
	
/*-------------------------------------Copy file using fgetch & fputc-----------------------------------*/
	fp = fopen("demo.txt","r");
	fp2 = fopen("copy.txt","w");
	while(!feof(fp)){
		ch = fgetc(fp);
		if(ch != EOF){
			fputc(ch,fp2);
		}
	}
	fclose(fp);
	fclose(fp2);
	printf("\nFile Copied successfully to copy.txt\n");
	
	return 0;
}