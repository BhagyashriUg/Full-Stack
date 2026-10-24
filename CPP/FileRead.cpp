#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream inFile("example.txt");//open file
	string line;
	if(inFile.is_open()){
		while(getline(inFile,line)){
			cout<<line<<endl;
		}
		inFile.close();
	}
	else{
		cout<<"Unable to open file";
	}
	return 0;
}