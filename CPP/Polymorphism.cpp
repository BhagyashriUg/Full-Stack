#include<iostream>
//Overloading Example 
//Overloading -> same function name in same class
//Overriding -> same function in different classes one function in one class overrides fuction in another class
using namespace std;
class Polymorphism{
	public:
		int Add(int a,int b){
			return a+b;
		}
		int Add(int a,int b,int c){
			return a+b+c;
		}
		int Add(int a,int b,int c,int d){
			return a+b+c+d;
		}
		int Add(int a,int b,int c,int d,int e){
			return a+b+c+d+e;
		}
};
int main(){
	int result;
	Polymorphism p;
	result = p.Add(5,5);
	cout<<"Result : "<<result<<"\n";
	result = p.Add(5,5,5);
	cout<<"Result : "<<result<<"\n";
	result = p.Add(5,5,5,5);
	cout<<"Result : "<<result<<"\n";
	result = p.Add(5,5,5,5,5);
	cout<<"Result : "<<result<<"\n";
	return 0;
}