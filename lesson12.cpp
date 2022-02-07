#include <iostream>

using namespace std;


class Charecter {
public:
	Charecter() {
		cout << "Вызвался конструктор Charecter" << endl;
	}
private:
	int HP;
};

class Orc : public Charecter {
public:
	Orc() {
		cout << "Вызвался конструктор Orc" << endl;
	}
};

class Warrior : public Charecter {
public:
	Warrior() {
		cout << "Вызвался конструктор Warrior" << endl;
	}
};


class OrcWarrior : public Orc,  public Warrior  {
public:
	OrcWarrior() {
		cout << "Вызвался конструктор OrcWarrior" << endl;
	}
};



int main() {
	setlocale(LC_ALL, "ru");
	OrcWarrior orc;
	return 0;
}

