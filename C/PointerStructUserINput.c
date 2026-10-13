#include<stdio.h>
typedef struct{
	int RollNo;
	float Marks;
	char Name[50];
}PointerStruct;

int main(){
	int a;
	printf("Enter Number of Students : ");
	scanf("%d",&a);
	PointerStruct s1[a];
	PointerStruct *ptr = &s1[a];
	for(int i=0;i<a;i++){
		printf("Enter Name of Student %d : ",i+1);
		scanf("%s",(ptr[i]).Name);
		printf("Enter Roll No : ");
		scanf("%d",&(ptr[i]).RollNo);
		printf("Enter Marks : ");
		
		scanf("%f",&(ptr[i]).Marks);
		printf("\n");
	}
	printf("Given Data is : \n");
	for(int i=0;i<a;i++){
		printf("\nStudent %d : \n",i+1);
		printf("\t%s",(ptr[i]).Name);
		printf("\t%d",(ptr[i]).RollNo);
		printf("\t%f",(ptr[i]).Marks);
	}
	return 0;
}