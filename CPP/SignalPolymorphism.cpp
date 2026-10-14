#include<iostream>
#include<cstring>
using namespace std;
class Signal{
	public:
		char signalcolor[100];
		
		void setSignalColor(char color[]){
			strcpy(signalcolor,color);
		}
		virtual void SignalColor(){
			cout<<"Unknown Color\n";
		}
		virtual ~Signal() = default; 
};
class Red:public Signal{
	public:
		void SignalColor() { 
			cout<<"Stop\n";
		}
};
class Yellow:public Signal{
	public:
		void SignalColor() {
			cout<<"Ready\n";
		}
};
class Green:public Signal{
	public:
		void SignalColor() {
			cout<<"Go\n";
		}
};
int main(){
	char choice[100];
	Red red;
	Green green;
	Yellow yellow;
	Signal s1;
	Signal *s2;
	cout<<"Enter which signal is Being shown : (red,yellow,green) : ";
	cin>>choice;
	s1.setSignalColor(choice);
	if(strcmp(s1.signalcolor,"red")==0){
		s2 = &red;
		s2->SignalColor();
	}
	else if(strcmp(s1.signalcolor,"yellow")==0){
		s2 = &yellow;
		s2->SignalColor();
	}
	else if(strcmp(s1.signalcolor,"green")==0){
		s2 = &green;
		s2->SignalColor();
	}
	else{
		s1.SignalColor();
	}
	return 0;
}
