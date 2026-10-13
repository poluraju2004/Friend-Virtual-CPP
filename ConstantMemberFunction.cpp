// Constant member function after data cannot be updated.

#include <iostream>
using namespace std;

class A {
	int x;
public :
	void setdata(int a) {
		x = a;
	}
	//constant member function
	int getdata() const {
		return x;
	}
};
int main() {
	A a;
	a.setdata(10);
	cout << "value of x: " << a.getdata();

	 return 0;
}