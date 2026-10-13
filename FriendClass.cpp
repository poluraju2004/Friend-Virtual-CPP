#include <iostream>
using namespace std;
class A {
	int x;
	friend class B;// friend class
};
// class B is declared as a friend inside the class A.Therefore,B is a friend of class A. class B can access the private member of class A.
class B {
public:
	void display(A& a) {
		cout << "Enter a x is: " << a.x;

	}
};
int main() {
	A a;
	B b;
	b.display(a);
	return 0;
}
