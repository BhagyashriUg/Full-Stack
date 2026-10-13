//owner - fname lname 
//car - brand, manufacturing year
//dealer - name
//car - owner data 
//dealer - car data 
//dealer access owner

#include<stdio.h>
typedef struct{
	char fName[20];
	char lName[20];
}owner;
typedef struct{
	char brandName[20];
	int ManufacturingYear[4];
	owner firstN;
	owner lastN;
}car;
typedef struct{
	car CarInfo;
}dealer;

int main(){
	owner = {"Bhagyashri", "Ugalmugale"};
	car = {"Volvo",2005};
	dealer d1;
	printf("%s %s",d1.CarInfo.firstN,d1.CarInfo.lastN);
	return 0;
}