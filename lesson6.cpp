#include <iostream>

using namespace std;


class A {
public:
	A() {
		cout << "Выделена память объекта класса А" << endl;
	}	
	virtual ~A() {
		cout << "Освобождение памяти объекта класса А" << endl;
	}
};


class B : public A {
public:
	B() {
		cout << "Выделена память объекта класса B" << endl;
	}
	~B() override {
		cout << "Освобождение памяти объекта класса B" << endl;
	}
};


int main() {
	setlocale(LC_ALL, "ru");
	A* bptr = new B;

	delete bptr;
	return 0;
}
