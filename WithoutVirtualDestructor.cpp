// without virtual destructor causing undefined behavior
#include <iostream>
using namespace std;

class Base {
public:
	Base() {
		cout << "Constructing base \n";
	}
	~Base() {
		cout << "Destructing base  \n";
	}
};
class Derived :public Base {
public:
	Derived() {
		cout << "Constructing Derived \n";
	}
	~Derived() {
		cout << "Destructing Derived  \n";
	}
};
int main() {
	Derived* d = new Derived();
	Base* b = d;
	delete b;
	getchar();
	return 0;
}
//Constructing base
//Constructing Derived
//Destructing base