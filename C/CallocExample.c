#include<stdio.h>
#include<stdlib.h>
int  main(){
	int num_candidates = 3;
	//calculate sets all 3 integers to 0 automaticall
	int *votes = (int*) calloc(num_candidates,sizeof(int));
	
	printf("Initial Values : %d , %d , %d\n",votes[0],votes[1],votes[2]);
	
	//Simulate voting
	votes[0]++;//votes for candidate 0 now value is incremented by 1
	votes[2]++;//vote for candidate 2 now value is incremented by 1
	votes[0]++;//another for candidate 0 now the value is 2
	votes[0]++;//Another for candidate 0 now the value is 3
	
	printf("Final Tally : \nCandidate A : %d\nCandidate B : %d\nCandidate C : %d\n",votes[0],votes[1],votes[2]);
	printf("size of int %d",sizeof(int));
	free(votes);
	return 0;
}