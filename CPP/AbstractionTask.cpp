#include<iostream>
#include<string>
using namespace std;
class Bank{
	public:
		char Name1[100];
		void Nameinput(char Name[100]){
			strcpy(Name1,Name);
		}
		
		virtual void open()=0;
		
		void Customer(){
			cout<<"Name : "<<Name1<<"\n";
		}
};
class SBI:public Bank{
	public:
		void close(){
			cout<<"SBI Bank is closed\n";
		}
};
class Indusind:public SBI{
	public:
		void open(){
			cout<<"Indusind Bank is Open\n";
		}	
};
int main(){
	char name[] = "Bhagyashri";
	Indusind i;
	i.Nameinput(name);
	i.Customer();
	i.open();
	i.close();
	return 0;
}