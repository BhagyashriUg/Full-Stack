#include<stdio.h>
typedef struct{
	char Name[20];
	int roll;
}FName;
typedef struct{
	char Name[20];
	FName firstName;
}LName;
int main(){
	
	FName s1 = {"Bhagyashri",59};
	LName s2 = {"Ugalmugale"};
	s2.firstName = s1;
	printf("%s %d %s",s2.firstName.Name,s2.firstName.roll,s2.Name);
}