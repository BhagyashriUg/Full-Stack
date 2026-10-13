#include<stdio.h>
union u1{
	int RollNo;
	float Marks;
	char Name[50];
};
int main(){
	union u1 student1;
	printf("Enter Roll No of student 1 : ");
	scanf("%d",&student1.RollNo);
	printf("\n%d\t%f\t%s\n",student1.RollNo,student1.Marks,student1.Name);
	printf("\nEnter Marks of student 1 : ");
	scanf("%f",&student1.Marks);
	printf("\n%d\t%f\t%s\n",student1.RollNo,student1.Marks,student1.Name);
	printf("\nEnter Name of student 1 : ");
	scanf("%s",&student1.Name);
	printf("\n%d\t%f\t%s",student1.RollNo,student1.Marks,student1.Name);
	return 0;
}