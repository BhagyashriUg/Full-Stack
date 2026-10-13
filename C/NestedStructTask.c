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
	int ManufacturingYear;
	owner Name;
}car;
typedef struct{
	char DealerName[20];
	car CInfo;
}dealer;

int main(){
	owner o1 = {"Bhagyashri", "Ugalmugale"};
	car c1 = {"Volvo",2005};
	dealer d1 = {"Payal Nandure
	"};
	c1.Name = o1;
	d1.CInfo = c1;
	
	printf("%s %s",d1.CInfo.Name.fName,d1.CInfo.Name.lName);
	printf("\nCar info : %s %d",d1.CInfo.brandName,d1.CInfo.ManufacturingYear);
	return 0;
}