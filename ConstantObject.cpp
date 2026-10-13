// non Constant function cannot be called constant objects

#include <iostream>
using namespace std;

class A {
	int x;
public:
	A(int a = 100 ) {
		x = a;
	}
	//non constant member function
	//int getdata() {
	//constant member function
	int getdata() const {
		return x;
	}
};
int main() {
	
	//constant object
	const A a;
	cout << "value of x: " << a.getdata(); // cannot call non constant function by a constant object

	return 0;
}