#include<stdio.h>
#include<stdlib.h>
int main(){
	int *playlist;
	int capacity = 2;//initial size 
	int count = 0;
	int choice , i;
	playlist = (int*) malloc(capacity * sizeof(int));
	while(1){
		if(count == capacity){
			capacity *= 2;//Double the size
			playlist = (int*) realloc(playlist,capacity*sizeof(int));
			printf("\n---- Playlist full! Explained capacity to %d ----\n",capacity);
		}
		printf("Enter Song ID (or -1 to quit) : ");
		scanf("%d",&choice);
		if(choice == -1)break;
		
		playlist[count++] = choice;
	}
	printf("\nYour Playlist :");
	for(i=0;i<count;i++){
		printf("[%d]",playlist[i]);
	}
	free(playlist);
	return 0;
}