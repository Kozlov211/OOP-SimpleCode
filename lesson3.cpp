#include <iostream>
#include <string>

using namespace std;


class A {
public:
	A() {
		cout << "Class A var 1" << endl;
		this->msg = "Message var 1";
	}
	A(string msg) {
		this->msg = msg;
		cout << "Class A var 2 " << endl;
	}
	void Printmsg() {
		cout << this->msg << endl;
	}

private:
	string msg;
};

class B : public A {
public:
	B(string msg):A( msg) {
		cout << "Class B" << endl;
	}

};

int main() {
	B b("var 2");
	b.Printmsg();
	return 0;
}


