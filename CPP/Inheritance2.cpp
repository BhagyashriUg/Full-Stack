#include<iostream>
using namespace std;
class child{
	public:
		void childName(){
			cout<<"Child";
		}
};
class parent:public child{
	public:
		void parentName(){
			cout<<"Father"<<"\t";
		}
};
int main(){
	parent p1;
	p1.parentName();
	p1.childName();
	return 0;
}