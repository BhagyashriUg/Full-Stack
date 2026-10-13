#include<stdio.h>
union u1{
	int RollNo;
	float Marks;
	char Name[50];
};
int main(){
	int option;
	union u1 stud1;
	printf("Enter What you want to Enter : ");
	printf("1 . Roll No \t 2. Marks \t 3. Name : 
	");
	scanf("%d",&option);
	if(option == 1){
		printf("Enter Roll No : ");
		scanf("%d",&stud1.RollNo);
		printf("%d \t %f \t %s",stud1.RollNo,stud1.Marks,stud1.Name);
	}
	else if(option == 2){
		printf("Enter Marks : ");
		scanf("%f",&stud1.Marks);
		printf("%d \t %f \t %s",stud1.RollNo,stud1.Marks,stud1.Name);
	}
	else if(option == 3){
		printf("Enter Name : ");
		scanf("%s",&stud1.Name);
		printf("%d \t %f \t %s",stud1.RollNo,stud1.Marks,stud1.Name);
	}
	else{
		printf("Invalid Input");
	}
	return 0;
}