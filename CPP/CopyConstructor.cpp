#include<iostream>
using namespace std;
class Employee{
	int id;
	string name;
	public:
		Employee(int i,string n){
			id = 1;
			name = n;
		}
		Employee(const Employee &e){
			id = e.id;
			name = e.name;
		}
		void display(){
			cout<<"ID : "<<id<<endl;
			cout<<"Name : "<<name<<endl;
		}
};
int main(){
	Employee e1(101,"Rahul");
	Employee e2 = e1;
	e1.display();
	e2.display();
	return 0;
}