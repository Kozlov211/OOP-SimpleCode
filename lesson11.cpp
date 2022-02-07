#include <iostream>

using namespace std;


class Component {
public:
	Component(string company_name) {
		cout << "Вызвался конструктор Component" << endl;
		this->company_name = company_name;
	}
private:
	string company_name;
};

class GPU : public Component {
public:
	GPU(string company_name) : Component(company_name) {
		cout << "Вызвался конструктор GPU" << endl;
	}
};

class Memory : public Component {
public:
	Memory(string company_name) : Component(company_name) {
		cout << "Вызвался конструктор Memory" << endl;
	}
};


class GraphicCard : public GPU, public Memory {
public:
	GraphicCard(string gpu_company_name, string memory_company_name) : GPU(gpu_company_name), Memory(memory_company_name) {
		cout << "Вызвался конструктор GraphicCard" << endl;
	}
};

int main() {
	setlocale(LC_ALL, "ru");
	GraphicCard gc("Intel", "Sumsung");
	return 0;
}

