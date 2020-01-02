#include <iostream>

using namespace std;

class Box{
	
	public:
		double length;
		double breadth;
		double height;
};


int main(){
	
	Box box1;
	Box box2;
	double volume =0.0;// 体积
	
	box1.length= 6.0;
	box1.breadth=5.0;
	box1.height=4.0;
	
	
	box2.length= 6.0;
	box2.breadth=5.0;
	box2.height=8.0;
	
	volume=box1.length * box1.breadth * box1.height;
	
	cout <<"box1 volume is " << volume << endl;
	
	
	volume=box2.length * box2.breadth * box2.height;
	
	cout <<"box2 volume is " << volume << endl;
	
	return 0;
	
}