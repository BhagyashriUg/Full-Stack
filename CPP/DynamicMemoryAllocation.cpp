#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter size of Array : ";
	cin>>n;
	int *ptr;
	ptr = new int[n];
	
	for(int i=0;i<n;i++){
		cout<<"Enter Element No "<<i+1<<" : ";
		cin>>ptr[i]; 
	}
	
	for(int i=0;i<n;i++){
		cout<<ptr[i]<<"\t";
	}
	delete(ptr);
	return 0;
}