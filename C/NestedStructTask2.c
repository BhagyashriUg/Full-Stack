#include<stdio.h>
typedef struct{
	int RollNo;
	char Name[30];
}student;

typedef struct{
	char Name[30];
	char Subject[30];
	student stud1;
}Staff;

typedef struct{
	char Name[30];
	char Department[30];
	Staff staff1;
}HOD;

int main(){
	HOD h1 ; Staff s1 ; student student1;
//	s1.stud1 = student

1;
//	h1.staff1 = s1;
	printf("Enter Name of Hod : ");
	scanf("%s",&h1.Name);
	printf("Enter Department : ");
	scanf("%s",&h1.Department);
	printf("Enter Staff Name : ");
	scanf("%s",&h1.staff1.Name);
	printf("Enter Subject : ");
	scanf("%s",&h1.staff1.Subject);
	printf("Enter Roll No of Student: ");
	scanf("%d",&h1.staff1.stud1.RollNo);
	printf("Enter Name of Student : ");
	scanf("%s",&h1.staff1.stud1.Name);
	
	printf("Given Data is : \n");
	printf("Hod Name : %s \tDepartment :  %s",h1.Name,h1.Department);
	printf("\nStaff Name : %s \tSubject : %s",h1.staff1.Name,h1.staff1.Subject);
	printf("\nStudent Roll No : %d \tName : %s",h1.staff1.stud1.RollNo,h1.staff1.stud1.Name);
	return 0;
}