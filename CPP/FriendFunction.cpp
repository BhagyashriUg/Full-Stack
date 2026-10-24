#include<iostream>
using namespace std;
class box{
	private:
		int width;
		public:
			box(){
				width = 10;
			}
			friend void display(box b);
};
void display(box b){
	cout<<"Width : "<<b.width<<endl;
}
int main(){
	box b1;
	display(b1);
	return 0;
}