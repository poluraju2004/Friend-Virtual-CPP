// virtual keyword

#include <iostream>
using namespace std;

class A {
public:
	 void eat() {
		cout << "Eating...: \n";
	}
};
class B :public A {
public:
	void eat() {
		cout << "Eating bread...: \n";
	}
};
int main() {
	// accessing the field by reference variable which refers to derived
	// irrespective of what type object the base pointer is holdeing,
	// the program outputs the constants of the function of hte class whose base pointer is the type of.
	A *a;
	B b;
	a = &b;
	a->eat();
	b.eat();
	return 0;
}