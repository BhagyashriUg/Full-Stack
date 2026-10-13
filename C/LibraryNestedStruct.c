//library book id name author name
//check availability of book issued to whom faculty or student 
//struct , enum , typedef 
//enum status - available , issue 
//union borrower - student id , ffact id
//struct library = title author book id enum union 

#include<stdio.h>
#include<string.h>
typedef enum{
	Available,Issue
}Status;
typedef union{
	int StudentId;
	int FacultyId;
}Borrower;
typedef struct{
	char Title[50];
	char Author[50];
	int BookId;
	Status s1;
	Borrower b1;
}Library;
int main(){
	Library l[3];
	
	l[0].BookId = 5454;
	strcpy(l[0].Title ,"Titanic");
	strcpy(l[0].Author , "Bhagyashri");
	l[0].s1=Issue;
	l[0].b1.FacultyId = 34232;
	
	l[1].BookId = 5645;
	strcpy(l[1].Title , "Avengers");
	strcpy(l[1].Author , "Payal");
	l[1].s1=Issue;
	l[1].b1.StudentId = 54634;
	
	l[2].BookId = 4598;
	strcpy(l[2].Title , "Chhava");
	strcpy(l[2].Author , "Komal");
	l[2].s1=Available;
	
	
	for(int i=0;i<3;i++){
		printf("\n\nBook Id : %d",l[i].BookId);
		printf("\nBook Title : %s",l[i].Title);
		printf("\nBook Author : %s\n",l[i].Author);
		if(l[i].s1 == Available){
			printf("Book is Available");
		}
		else{
			printf("Book is Issued");
		}
	}
	return 0;
}