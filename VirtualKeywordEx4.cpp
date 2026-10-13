#include <iostream>
using namespace std;

class Base {
public:
	virtual void fun(int x = 0) {
		cout << "Base::fun(),x = " << x << endl;
	}
};

class Derived:public Base {
public:
	virtual void fun(int x = 10) { //note this change
		cout << "Derived::fun(),x = " << x << endl;
	}
};
int main() {
	Derived d; // constructor

	//Base class pointer which will edit value in memory location of derived class construtor.
	Base* B;
	B = &d;
	B->fun();// Calling a derived class member function 
	/* the output of this program is the same as the prevous program,wher fun(x) is the function in derived class.
	the reason is the same,the default value is  substitued at compile time.
	the fun() is called on 'B' which is a pointer of base type. so compiler substitues 0 (not 10). */

	return 0; // returning o means the program
	// executed successfully.
}