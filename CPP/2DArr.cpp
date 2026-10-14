#include<iostream>
using namespace std;
int main(){
	int row,col;
	cout<<"Enter Number of Rows : ";
	cin>>row;
	cout<<"Enter Number of Columns : ";
	cin>>col;
	int arr[row][col];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<"Enter Element no "<<i<<j<<" : ";
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<"\narr["<<i<<"]["<<j<<"] : "<<arr[i][j];
		}
	}
}