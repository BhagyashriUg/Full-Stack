#include<iostream>
#include<string>
using namespace std;
class myexception{
	public:
		string message;
		myexception(string msg) : message(msg){
		//		message=msg;
		}
};
int main(){
	int age = 15;
	try{
		if(age<18){
			throw myexception("Access denied : Age must be 18 or older.");
		}
		else{}
	}
	catch (const myexception& e){
		cout<<"Caught Exception : "<<e.message<<endl;
	}
	return 0;
}