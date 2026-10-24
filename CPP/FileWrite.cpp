#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream outFile("example.txt");//create & open file
	if(outFile.is_open()){
		outFile<<"Hello, this is file handling in c++. \n";
		outFile<<"Writing data into file. ";
		outFile.close();
	}
	else{
		cout<<"Unable to open file";
	}
	return 0;
}