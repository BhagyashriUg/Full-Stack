#include<stdio.h>
int main(){
	int a,b,c;
	while(a<1 || a>2){
	printf("Which User Are You : 1. Regular\t2. Commercial\n");
	scanf("%d",&a);
	}
	while(b<=0){
		printf("How Many Units Have You Used : ");
		scanf("%d",&b);
	}
	if(a==1){
		if(b<100){
			c = b*5;
			printf("Your Bill is : %d",c);
		}
		else if(b>100 && b<200){
			c = b*10;
			printf("Your Bill is : %d",c);
		}
		else if(b>=200 && b<300){
			c = b*15;
			printf("Your Bill is : %d",c);
		}
		else{
			c = b*20;
			printf("Your Bill is : %d",c);
		}
	}
	else if(a==2){
		if(b<100){
			c = b*10;
			printf("Your Bill is : %d",c);
		}
		else if(b>100 && b<200){
			c = b*20;
			printf("Your Bill is : %d",c);
		}
		else if(b>=200 && b<300){
			c = b*30;
			printf("Your Bill is : %d",c);
		}
		else{
			c = b*40;
			printf("Your Bill is : %d",c);
		}
	}
}