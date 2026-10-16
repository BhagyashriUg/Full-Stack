#include<iostream>
using namespace std;
int main(){
	float n,d;
	cout<<"Enter Numerator : ";
	cin>>n;
	do{
		cout<<"Enter Denominatro : ";
		cin>>d;
		try{
			if(d==0){
				throw runtime_error("Divide by Zero Error\n");
			}
			else{
				cout<<"Result is : "<<n/d;
			}
		}
		catch(const runtime_error &e){
			//the message typed in try block is printed from this block
			cout<<e.what()<<endl;
		}
	}while(d==0);
	
}