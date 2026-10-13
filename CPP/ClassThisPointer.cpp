#include<iostream>
#include<string>
using namespace std;
class Info{
	public:
	int Num;
	char Name[100];
	
	void Input(int n,char n1[100]){
//		strcpy(Name,n1);
		this->Num = n;
		strcpy(this->Name,n1);
	}
	void display(){
		cout<<Num<<"\t"<<Name;
	}
};

int main(){
	char a[] = "Ron";
	Info obj;
	obj.Input(45,a);
	obj.display();
	return 0;
}