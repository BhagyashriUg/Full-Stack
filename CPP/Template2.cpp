#include<iostream>
using namespace std;

template <class T>
T maximum(T a,T b){
	if(a>b)
		return a;
	else
		return b;
}

int main(){
	cout<<"Maximum integer : "<<maximum(15,25)<<endl;
	cout<<"Maximum float : "<<maximum(7.5f,3.2f)<<endl;
	cout<<"Maximum character : "<<maximum('A','Z')<<endl;
	return 0;
}