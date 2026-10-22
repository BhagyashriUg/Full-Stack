#include<iostream>
using namespace std;
class Student{
	public:
		int id;
		string name;
		
		void setData(int id,string name){
			this->id = id;
			this->name = name;
		}
		void display(){
			cout<<"ID  : "<<id<<endl;
			cout<<"Name : "<<name<<endl;
		}
};
int main(){
	Student s1,s2;
	s1.setData(101,"Harsh");
	s2.setData(102,"Amit");
	
	s1.display();
	s2.display();
	return 0;
}