#include <iostream>
#include <string>

using namespace std;


class Human {
public:
	string name;
};


class Student : public Human {
public:
	string group;
};

class Proffessor : public Human{
public:
	string subject;
};

int main() {
	Student st;
	st.name = "Вася";
	cout << st.name << endl;
	return 0;
}


