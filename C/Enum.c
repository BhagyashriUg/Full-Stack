
#include<stdio.h>
enum e1{
	Monday ,
	Tuesday ,
	Wednesday ,
	Thursday ,
	Friday ,
	Saturday ,
	Sunday 
};
int main(){
	enum e1 day1 = Saturday;
	
	switch(day1){
		case Monday: 
			printf("Monday");
			break;
		case Tuesday:
			printf("Tuesday");
			break;
		case Wednesday:
			printf("Wednesday");
			break;
		case Thursday:
			printf("Thursday");
			break;
		case Friday:
			printf("Friday");
			break;
		case Saturday:
			printf("Saturday");
			break;
		case Sunday:
			printf("Sunday");
			break;
		default :
			printf("Nothing");
			break;
	}
	return 0;
}