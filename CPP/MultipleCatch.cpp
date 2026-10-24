#include<iostream>
using namespace std;
int main(){
	int a, b;
	
	cout<<"Enter two Numbers : ";
	cin>>a>>b;
	try{
		if(b == 0){
			throw b;
		}
		if(a<0){
			throw "Negative number is not allowed";
		}
		cout<<"Division : "<<(float)a/b<<endl;
	}
	catch(int x){
		cout<<"Error : Cannot divide by zero"<<endl;
	}
	catch(const char* msg){
		cout<<"Error : "<<msg<<endl;
	}
	catch(...){
		cout<<"Unknown exception occurred"<<endl;
	}
	return 0;
	
}