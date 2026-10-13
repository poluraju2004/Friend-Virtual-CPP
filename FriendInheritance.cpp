//Relation between Inheritance and friendship.
#include <iostream>
using namespace std;

class A {
protected:
	int x;
	public:
		A() {
			x = 10;
		}
		friend void show();
};
class B : public A {
private:
	int y;
public:
	B() {
		y = 20;
	}
};
void show() {
	B b;
	cout << "In show. \n";
	cout << "The default value of A::x" << b.x << endl;
	cout << "can't access private member declared in class B \n";
	//cout << "The default value of B::y" << b.y;
	}
int main() {
	show();
	getchar();
	return 0;
}