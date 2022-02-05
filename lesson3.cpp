#include <iostream>
#include <string>

using namespace std;


class A {
public:
	A() {
		cout << "Class A" << endl;
	}
	~A(){
		cout << "~Class A" << endl;
	}

};

class B : public A {
public:
	B() {
		cout << "Class B" << endl;
	}
	~B() {
		cout << "~Class B" << endl;
	}

};

int main() {
	B b;
	return 0;
}


