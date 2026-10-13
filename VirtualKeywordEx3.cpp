#include <iostream>
using namespace std;
class base {
public:
	void fun1() {
		cout << "Base - 1. \n";
	}
	virtual void fun2() {
		cout << "Base - 2. \n";
	}
	virtual void fun3() {
		cout << "Base - 3. \n";
	}
	virtual void fun4() {
		cout << "Base - 4. \n";
	}
};
class Derived : public base {
public:
	void fun1() {
		cout << "Derived - 1. \n";
	}
	void fun2() {
		cout << "Derived - 2. \n";
	}
	void fun4(int x) {
		cout << "Derived - 4. \n";
	}
};
int main() {
	base* p;
	Derived d;
	p = &d;
	// early becaiuse fun1() in non-virtual
	//in base
	p->fun1();
	// late binding(RTP)  RTP stands for Runtime Polymorphism
	p->fun2();
	// late binding(RTP)
	p->fun3();
	// late binding(RTP)
	p->fun4();
	// Early binding but this function call is illegal(produces error) because pointer is of base type and function is of derived class.
	// p->fun4(5);
	return 0;
}