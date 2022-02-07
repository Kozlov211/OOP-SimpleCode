#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main() {
	setlocale(LC_ALL, "ru");
	ofstream fout;
	fout.open("myFile.txt");
	fout << "Это наши данные";
	fout.close();
	return 0;
}

