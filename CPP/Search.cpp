#include<iostream>
using namespace std;
int main(){
	int n,find;
	bool found;
	cout<<"Enter Number of Elements You want : ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"Enter element number "<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<"Linear Search : ";
	cout<<"Enter Number to be found : ";
	cin>>find;
	for(int i=0;i<n;i++){
		if(arr[i] == find){
			cout<<"Number found at index : "<<i;
			found = true;
		}
	}
	if(found == false){
		cout<<"Number Not found";
	}
	return 0;
}