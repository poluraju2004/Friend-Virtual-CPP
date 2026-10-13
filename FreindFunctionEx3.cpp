#include <iostream>
using namespace std;

class B; // forward declaration
class A {
	int x;
public:
	void setdata(int i) {
		x = i;
	}
	friend void min(A, B);
};
class B {
	int y;
public:
	void setdata(int i) {
		y = i;
	}
	friend void min(A, B);
};
void min(A a, B b) {
	if (a.x <= b.y)
		cout << a.x << endl;
	else
		cout << b.y << endl;
}
int main() {
	int x1, x2;
	A a;
	B b;
	cout << "Enter x  and y values: \n";
	cin >> x1 >> x2;
	a.setdata(x1);
	b.setdata(x2);
	min(a, b);
	return 0;
}