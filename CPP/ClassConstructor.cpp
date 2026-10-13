#include<iostream>
using namespace std;
class ConstructorEg{
	public:
		ConstructorEg(){
			cout<<"Hello";
		}
		~ConstructorEg(){
			cout<<" World";
		}
};
int main(){
	ConstructorEg obj;
	cout<<" 123 ";
	return 0;
}


