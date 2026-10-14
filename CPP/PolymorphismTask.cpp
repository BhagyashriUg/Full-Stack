#include<iostream>
using namespace std;
class Vehicle{
	public:
		void start(){
			cout<<"Vehicle Start\n";
		}
};
class Bike:public Vehicle{
	public:
		void start(){
			cout<<"Bike Start\n";
		}
};
class Car:public Vehicle{
	public:
		void start(){
			cout<<"Car Start\n";
		}
};
int main(){
	Car c1;
	Bike b1;
	Vehicle v1;
	v1.start();
	c1.start();
	b1.start();
	b1.Vehicle::start();//here the function example of  overriding where the function in child class overrides function in parent class
	//Compile time polymorphism 
}