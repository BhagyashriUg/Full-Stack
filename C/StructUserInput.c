#include<stdio.h>
struct s1{
	int RollNo;
	float Marks;
	char Name[50];
};
int main(){
	int n;
	printf("Enter Number of Students : ");
	scanf("%d",&n);
	struct s1 student[n];
	for(int i=0;i<n;i++){
		student[i];
		printf("\nEnter Roll No : ");
		scanf("%d",&student[i].RollNo);
		printf("Enter Marks : ");
		scanf("%f",&student[i].Marks);
		printf("Enter Name : ");
		scanf("%s",&student[i].Name);
	}
	printf("\nGiven Data is : \n");
	printf("Roll No \tMarks \t Name");
	for(int i=0;i<n;i++){
		printf("\n%d \t %f \t %s",student[i].RollNo,student[i].Marks,student[i].Name);
	}
}