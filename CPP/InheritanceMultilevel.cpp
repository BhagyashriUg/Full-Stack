#include<iostream>
using namespace std;
class Employee{
	public:
		int EId;
		char EName[100];
		int salary;
		void EmpInput(){
			cout<<"\nEnter Employee Id : ";
			cin>>EId;
			cout<<"Enter Employee Name : ";
			cin>>EName;
			cout<<"Enter Employee Salary : ";
			cin>>salary;
		}
		void EmpDisplay(){
			cout<<"\nEmployee ID : "<<EId<<"\t"<<"Employee Name : "<<EName<<"\t"<<"Employee Salary : "<<salary;
		}
};

class Manager:public Employee{
	public:
		char MName[100];
		int Experience;
		void MInput(){
			cout<<"\nEnter Manager Name : ";
			cin>>MName;
			do{
				cout<<"Enter Years of Experience :";
				cin>>Experience;
			}while(Experience>=100 or Experience<0);
		}
		void MDisplay(){
			cout<<"\nManager Name : "<<MName<<"\t"<<"Experience : "<<Experience;
		}
};

class Company:public Manager{
	public:
		int EstablishYear;
		char CName[100];
		void CInput(){
			do{
				cout<<"\nEnter Establishment Year : ";
				cin>>EstablishYear;
			}while(EstablishYear>=2027);
			cout<<"Enter Company Name : ";
			cin>>CName;
		}
		void CDisplay(){
			cout<<"\nCompany Name : "<<CName<<"\t"<<"Establishment Year : "<<EstablishYear;
		}
};
int main(){

	Company c1;
	c1.EmpInput();
	c1.MInput();
	c1.CInput();
	c1.EmpDisplay();
	c1.MDisplay();
	c1.CDisplay();
	return 0;
}