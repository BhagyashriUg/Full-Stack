#include<iostream>
using namespace std;
class Grandparent{
	public:
		void disp1(){
			cout<<"This is GrandParent\n";
		}
};
class Parent1:public Grandparent{
	public:
		void disp2(){
			cout<<"This is Parent 1\n";
		}	
};
class Parent2:public Grandparent
{
	public:
		void disp3(){
			cout<<"This is Parent 2\n";
		}	
};
class Child:public Parent1,public Parent2{
	public:
		void disp4(){
			cout<<"This is Child";
		}	
};

int main(){
	
	Child c1;
	c1.disp1();
	c1.disp2();
	c1.disp3();
	c1.disp4();
	return 0;
}