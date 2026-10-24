#include<iostream>
using namespace std;
class Shape{
	public:
		virtual void calculateArea() = 0;
};

class Rectangle:public Shape{
	public:
		int length, breadth;
		Rectangle(int l,int b){
			length = l;
			breadth = b;
		}
		void calculateArea() override{
			cout<<"Area of Rectangle : "<<length*breadth<<endl;
		}
};
class Circle : public Shape{
	public:
		int radius;
		Circle(int r){
			radius = r;
		}
		
		void calculateArea() override{
			cout<<"Area of Circle : "<<3.14*radius*radius<<endl;
		}
};
int main(){
	Rectangle r(10,5);
	Circle c(7);
	
	r.calculateArea();
	c.calculateArea();
	
	return 0;
}