#include<iostream>
//Method Hiding
using namespace std;
class vehicle{
	public:
		virtual void start()=0;
		void stop(){
			cout<<"Vehicle stopped"<<endl;
		}
};
class car:public vehicle{
	public:
		void start(){
			cout<<"car start with the key"<<endl;
		}
};
int main(){
	car c;
	c.start();
	c.stop();
	return 0;
}