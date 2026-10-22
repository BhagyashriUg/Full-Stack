#include<iostream>
using namespace std;
int main(){
	cout<<"\nBinary Search : ";
	int find;
	cout<<"Enter Number to be found : ";
	cin>>find;
	int temp;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[i]){
			temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp; 
		}
		}
	}
	int i;
	do{
		i = n/2;
		if(arr[i]<find){
			
		}
		else if(arr[i]>find){
			i = 
		}
	}while(arr[i] != find)g
	return 0;
}