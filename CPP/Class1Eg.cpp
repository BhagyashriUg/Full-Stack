#include<iostream>
using namespace std;

class FullName{
	public:
		void FName(char x[100]){
			cout<<x<<" ";
		}
		void LName(char y[100]){
			cout<<y;
		}
};
int main(){
	FullName obj;
	char a[100];
	char b[100];
	cout<<"Enter Your First Name : ";
	cin>>a;
	cout<<"Enter Your Last Name: ";
	cin>>b;
	obj.FName(a);
	obj.LName(b);
	return 0;
}