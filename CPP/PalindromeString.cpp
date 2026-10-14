#include<iostream>
#include<string>
using namespace std;
int main(){
	char str[100],str1[100];
	cout<<"Enter String to check palindrome for : ";
	cin>>str;
	strcpy(str,str1);
	reverse(str1);
	cout<<str<<"  "<<str1;
}