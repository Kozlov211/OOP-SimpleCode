#include <iostream>

using namespace std;


class Car {
public:
	Car() {
		cout << "Class Car" << endl;
	}
	~Car() {
		cout << "Class ~Car" << endl;
	}
};


class Airplane {
public:
	Airplane() {
		cout << "Class Airplane" << endl;
	
	}
	~Airplane() {
		cout << "Class ~Airplane" << endl;
	}
};

class FlyingCar : public Airplane, public Car {
public:
	FlyingCar() {
		cout << "Class FlyingCar" << endl;
	}
	~FlyingCar() {
		cout << "Class ~FlyingCar" << endl;
	}
};




int main() {
	FlyingCar fc;
	return 0;
}
