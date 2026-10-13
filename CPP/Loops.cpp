#include<iostream>
using namespace std;
int main(){
	int a,i=0,j=0;
	cout<<"Enter a Number : ";
	cin>>a;
	
	//do-while
	cout<<"Number Series is : ";
	do{
		cout<<i<<"\t";
		i++;
	}while(i<=a);
	
	//while
	cout<<"\nEven Numbers are : ";
	while(j<=a){
		if(j%2==0){
			cout<<j<<"\t";
		}
		j++;
	}
	
	//for Prime Number logic 1
	cout<<"\nPrime Numbers are : ";
	for(int k=2;k<=a;k++){
		bool isPrime = true;
		for(int x=2;x<k;x++){
			if(k%x==0){
				isPrime = false;
				break;	
			}
		}
		if(isPrime){
			cout<<k<<"\t";
		}
	}
	
	//Prime Number Logic 2 
	cout<<"\nPrime Numbers are : ";
	for(int i=1;i<=a;i++){
		int count = 0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				count+=1;
			}
		}
		if(count>2){}
		else{
			cout<<i<<"\t";
		}
	}
	return 0;
}