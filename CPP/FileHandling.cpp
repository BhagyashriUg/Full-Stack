#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream file("example.txt",ios::in|ios::out|ios::app);
	if(file.is_open()){
		file<<"Appending new line. \n";
		file.seekg(0);//move pointer to beginning
//		file.seekp();
		string line;
		while(getline(file,line)){
			cout<<line<<endl;
		}
		file.close();
	}
	return 0;
}

//write vs append
//write removes all content from file and writes newly in file 
//append dont remove the contents from file it goes to last file content and appends the new content ahead of it