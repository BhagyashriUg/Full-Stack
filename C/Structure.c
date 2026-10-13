#include<stdio.h>
struct s1{
	int RollNo;
	float Marks;
	char Name[50];
};
int main(){
	struct s1 student1 = {5,90.5,"Bhagyashri"};
	struct s1 student2 = {6,92.5,"Payal"};
	struct s1 student3 = {7,95,"Komal"};
	struct s1 student4 = {8,99.99,"Vaishnavi"};
	printf("%d \t %f \t %s\n",student1.RollNo,student1.Marks,student1.Name);
	printf("%d \t %f \t %s\n",student2.RollNo,student2.Marks,student2.Name);
	printf("%d \t %f \t %s\n",student3.RollNo,student3.Marks,student3.Name);
	printf("%d \t %f \t %s\n",student4.RollNo,student4.Marks,student4.Name);

	return 0;
}

