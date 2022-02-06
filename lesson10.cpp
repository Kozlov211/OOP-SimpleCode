#include <iostream>

using namespace std;


class IBicycle {
public:
	void virtual twist_the_wheel() = 0;
	void virtual ride() = 0;

};


class SimpleBicycle : public IBicycle {
public:
	void twist_the_wheel () override {
		cout << "Метод twist SimpleBicycle" << endl;	
	}

	void ride () override {
		cout << "Метод ride SimpleBicycle" << endl;	
	}
};

class Human {
public:
	void ride_on(IBicycle &bicycle) {
		cout << "Крутим руль" << endl;
		bicycle.twist_the_wheel();
		cout << "Поехали!" << endl;
		bicycle.ride();

	}
};


int main() {
	setlocale(LC_ALL, "ru");
	SimpleBicycle sb;
	Human human;
	human.ride_on(sb);
	return 0;
}

