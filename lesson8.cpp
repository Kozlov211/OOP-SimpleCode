#include <iostream>

using namespace std;


class Msg {
public:
	Msg(string msg) {
		this->msg = msg;
	}
	virtual string get_msg() {
		return this->msg;
	}

private:
	string msg;
};


class BraketsMsg : public Msg {
public:
	BraketsMsg(string msg) : Msg(msg) {
	
	}
	string get_msg() override {
		return "[" + ::Msg::get_msg() + "]";
	}

};

class Printer {
public:
	void print(Msg* msg) {
		cout << msg->get_msg() << endl;
	}

};




int main() {
	setlocale(LC_ALL, "ru");
	Msg* msgptr;
	BraketsMsg msg("Вася");
	msgptr = &msg;
	Printer printer;
	printer.print(msgptr);
	return 0;
}
