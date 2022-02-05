#include <iostream>

using namespace std;

class Gun {
public:
	virtual void Shoot() {
		cout << "BANG!" << endl;
	}
};


class Submachinegun : public Gun  {
public:
	void Shoot() override {
		cout << "BANG! BANG! BANG!" << endl;
	}

};


class Player {
public:
	void Shoot(Gun *gun){
		gun->Shoot();
	}
};


int main() {
	Submachinegun submachgun;
	Gun gun;
	Gun* weapon = &gun;
	Player pl;
	pl.Shoot(weapon);

	return 0;
}
