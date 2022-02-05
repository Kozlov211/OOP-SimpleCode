#include <iostream>

using namespace std;


class Weapon {
public:
	virtual void Shoot() = 0;
};


class Gun : public Weapon {
public:
	 void Shoot() override {
		cout << "BANG!" << endl;
	}
};


class Submachinegun : public Gun  {
public:
	void Shoot() override {
		cout << "BANG! BANG! BANG!" << endl;
	}

};


class Bazooka : public Weapon {
public:
	void Shoot() override {
		cout << "BADABUM" << endl;
	}
};

class Knife : public Weapon {
public:
	void Shoot() override {
		cout << "VJUH!!" << endl;
	}
};

class Player {
public:
	void Shoot(Weapon  *weapon){
		weapon->Shoot();
	}
};


int main() {
	Submachinegun submachgun;
	Gun gun;
	Bazooka bazook;
	Knife knife;
	Player player;
	Weapon* weapon;
	weapon = &knife;
	player.Shoot(weapon);
	return 0;
}
