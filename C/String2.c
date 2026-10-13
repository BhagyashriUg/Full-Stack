#include<stdio.h>
#include<string.h>
int main(){
	char arr[] = "Things Will Work Out. ";
	char arr2[] = "Keep Going";
	printf("Original String is : %s",arr);
	printf("\nLenth of String is : %d",strlen(arr));
	printf("\nUpper Function : %s",strupr(arr));
	printf("\nLower Function : %s",strlwr(arr));
	printf("\nReverse Function : %s",strrev(arr));
	
	//Concatenation
	strrev(arr);
	printf("\nConcatenation of Two Strings is : %s",strcat(arr,arr2));
	
	//Task1
	
	char a1[] = "Bhagyashri";
	char a2[] = "Sanjay";
	char a3[] = "Ugalmugale";
	char a4[] = " ";
	strcat(a1,a4);
	strcat(a1,a2);
	strcat(a1,a4);
	strcat(a1,a3);
	printf("\n%s",a1);
	
//	printf("\nConacatination Task : %s",strcat(a1,strcat(a4,strcat(a2,strcat(a4,strcat(a3,a4))))));

//  String Copy & Compare 
	strcpy(a1,a2);
	printf("\nCopy of a2 in a1 is : %s",a1);
	
	
	
	printf("\nComparison Result of a1 and a2 is : %d\n",strcmp(a1,a2));
	if(strcmp(a3,a2) == 0){
		printf("String are Same");
	}
	else{
		printf("Strings are not Same");
	}
	
	return 0;
}


