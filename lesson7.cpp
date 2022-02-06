#include <iostream>

using namespace std;


class Human {
public:
	Human(string name) {
		this->name = name;
		this->weigth = 0;
		this->age = 0;
	}
	Human(string name, int age) : Human(name) {
		this->age = age;
	}
	Human(string name, int age, int weigth) : Human(name, age) {
		this->weigth = weigth;
	}
	void Get_info() {
		cout << "name: " << this->name << endl << "weigth: " << this->weigth << endl << "age: " << this->age << endl;
	}

	string name;
	int weigth;
	int age;
};




int main() {
	setlocale(LC_ALL, "ru");
	Human man("Вася", 10, 50);
	man.Get_info();
	return 0;
}
