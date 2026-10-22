#include<iostream>
using namespace std;
class Number{
	public:
		int value;
		Number(int v){
			value = v;
		}
		Number operator+(Number obj){
			return Number(value+obj.value);
		}
		void display(){
			cout<<"Value : "<<value<<endl;
		}
};
int main(){
	Number n1(10);
	Number n2(20);
	Number n3 = n1 + n2;
	n3.display();
	return 0;
}