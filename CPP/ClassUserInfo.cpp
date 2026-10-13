#include<iostream>
using namespace std;
class UserDetails{
	public:
		char Name[100];
		int RollNo;
		float Marks;
		
		void UserInfoInput(){
			cout<<"Enter Your Name : ";
			cin>>Name;
			cout<<"Enter Your Roll Number : ";
			cin>>RollNo;
			cout<<"Enter Your Marks : ";
			cin>>Marks;
		}
		void UserInfodisplay(){
			cout<<"Name : "<<Name<<"\n";
			cout<<"Roll Number : "<<RollNo<<"\n";
			cout<<"Marks : "<<Marks;
		}
};
int main(){
	UserDetails obj;
	obj.UserInfoInput();
	obj.UserInfodisplay();
	
	return 0;
}