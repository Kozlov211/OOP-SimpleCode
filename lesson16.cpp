#include <iostream>
#include <string>
#include <fstream>

using namespace std;




int main() {
	setlocale(LC_ALL, "ru");
	ifstream fin;
	string path = "myFile.txt";
	fin.exceptions(ifstream::badbit| ifstream::failbit);
	try {
		cout << "Попытка открыть файл" << endl;
		fin.open(path);
		cout << "Файл открыт" << endl;
	}
	catch (const std::exception& ex) {
		cout << ex.what() << endl; 
		cout << "Ошибка открытия файла" << endl;
	}

	fin.close();

	return 0;
}

