#include <iostream>
using namespace std;

class Shape { //base class
public:
	virtual void draw() {//virtual function
		cout << "Shape Drawing....\n";
	}
};
class Rectangle : public Shape{ //inherting Shape class 
public:
	void draw() {
		cout << "Drawing Rectangle....\n";
	}
};
class Circle :public Shape  { //inherting Shape class 
public:
	 void draw() {
		cout << "Circle Drawing....\n";
	}
};
int main() {
	Shape* s;//base class pointer
	Shape sh;//base class object
	Rectangle r;
	Circle c;
	s = &sh;
	s->draw();
	s = &r;
	s ->draw();
	s = &c;
	s->draw();


	return 0;

}
