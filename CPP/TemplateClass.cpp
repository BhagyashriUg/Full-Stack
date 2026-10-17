#include<iostream>
using namespace std;

template<typename T>
class Calculator{
	private:
		T a,b;
	public:
		Calculator(T x,T y){
			a = x;
			b = y;
		}
		void display(){
			cout<<"Addition : "<<a+b<<endl;
			cout<<"Substraction : "<<a-b<<endl;
			cout<<"Multiplication : "<<a*b<<endl;
			
			if(b != 0)
				cout<<"Division : "<<a/b<<endl;
			else
				cout<<"Division by zero is not possible"<<endl;
		}
};

int main(){
	Calculator<int> c1(20,5);
	cout<<"Integer Calculator"<<endl;
	c1.display();
	cout<<endl;
	Calculator<double>c2(10.5,2.0);
	cout<<"Double Calculator"<<endl;
	c2.display();
	
	return 0;
}
