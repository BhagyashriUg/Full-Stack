#include<iostream>
using namespace std;
class Animal{
	public:
		virtual void sound(){
			cout<<"Animal makes a sound"<<endl;
		}
		virtual ~Animal() = default;
};
class Dog:public Animal{
	public:
		void sound() override{
			cout<<"Dog barks"<<endl;
		}
};
class Cat:public Animal{
	public:
		void sound() override{
			cout<<"Cat meows"<<endl;
		}
};
int main(){
	Dog dog;
	Cat cat;
	Animal *ptr;
	ptr = &dog;
	ptr->sound(); //Dog bark
	ptr = &cat;
	ptr->sound(); //cat meows
	return 0;
}