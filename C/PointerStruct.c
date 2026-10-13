#include<stdio.h>
typedef struct{
	int RollNo;
	float Marks;
	char Name[50]; 
}ExampleStruct;

int main(){
	ExampleStruct s1 = {50,99.99,"Bhagyashri"};
	ExampleStruct *ptr = &s1;
	printf("Name : %s",ptr->Name);
	printf("\nRoll No : %d",(*ptr).RollNo);
	printf("\nMarks : %f",ptr->Marks);
	return 0;
}