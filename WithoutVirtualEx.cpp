//without virtual keyword

#include <iostream>
using namespace std;

class A {
public:
	void eat() {
		cout << "Eating...: \n";
	}
};
class B:public A {
public:
	void eat(){
		cout << "Eating bread...: \n";
	}
};
int main() {
	B b;
	b.eat();
	return 0;
}