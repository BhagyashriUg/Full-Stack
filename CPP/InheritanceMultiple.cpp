#include<iostream>
using namespace std;
class Client{
	public:
		void disp1(){
			cout<<"Client Wants to See new Properties\n";
		}
};
class Property{
	public:
		void disp2(){
			cout<<"Properties for sale\n";
		}
};
class Dealer:public Client,public Property{
	public:
		void disp3(){
			cout<<"Dealer has Properties For Clients As per Requirement";
		}
};
int main(){
	Dealer d1;
	d1.disp1();
	d1.disp2();
	d1.disp3();
	return 0;
}