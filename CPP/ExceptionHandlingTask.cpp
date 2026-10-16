//myexception class
//user age<18 error 
//user age>18 no error message print
#include<iostream>
using namespace std;
class MyException{
	public:
		void UserAge(int a,char Driving[100]){
			try{
				if(a<18){
					throw runtime_error("Sorry You're Still Minor\n");
				}
				else{
					cout<<"Your Age is Eligible for license\n";
					try{
						if(strcmp(Driving,"no")==0){
							throw runtime_error("Sorry You cannot drive car You are not eligible for lincense\n");
						}
						else if(strcmp(Driving,"yes")){
							throw runtime_error("Invalid Option\n");
						}
						else{
							cout<<"Congratulations You are Eligible for license!\n";
						}
					}
					catch(const runtime_error &e){
						cout<<e.what()<<endl;
					}
				}
			}
			catch(const runtime_error &e){
				cout<<e.what()<<endl;
			}
		}
};
int main(){
	MyException Exception;
	int age;
	char driving[100];
	cout<<"Enter Your age : ";
	cin>>age;
	cout<<"Can You Drive Car : (yes/no) : ";
	cin>>driving;
	Exception.UserAge(age,driving);
	return 0;
}