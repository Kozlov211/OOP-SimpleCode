#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main() {
	setlocale(LC_ALL, "ru");
	string path = "myFile.txt";
	ifstream fin;
	fin.open(path);
	string str;
	while (!fin.eof()) {
		getline(fin, str);
		cout << str << endl;
	}
	fin.close();
	return 0;
}

