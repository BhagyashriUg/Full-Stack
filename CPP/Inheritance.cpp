#include<iostream>
using namespace std;
class parent{
	public:
		void parentName(){
			cout<<"Father"<<"\t";
		}
};

class child:public parent{
	public:
		void childName(){
			cout<<"Child";
		}
};

int main(){
	child c1;
	c1.parentName();
	c1.childName();
	
	return 0;
}