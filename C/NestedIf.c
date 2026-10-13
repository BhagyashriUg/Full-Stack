#include<stdio.h>
int main(){
	int a, b;
			
		printf("Are You Indian (Enter Option Number)");
		printf("\t1 . Yes \t 2 . No\n");
		scanf("%d",&a);
		if(a == 1){
			printf("Enter Your Age : \n");
			scanf("%d",&b);
			if(b>=18){
				printf("You are eligible to vote");	
			}
			else{
				printf("You are Minor Not Eligible for Voting");
			}
		}
		
		
		else{
			printf("You are Not Eligible to Vote");
		}
	}
	return 0;
}