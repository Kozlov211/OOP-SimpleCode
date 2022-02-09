#include <iostream>
#include <string>
#include <fstream>

using namespace std;


class Point {
public:
	Point() {
		this->x = 0;
		this->y = 0;
		this->z = 0;
	}
	Point(int x, int y, int z) {
		this->x = x;
		this->y = y;
		this->z = z;

	}
	void print() {
		cout << "X: " << this->x <<  endl << "Y: " << this->y << endl << "Z: " << this->z << endl;
	}

private:
	int x;
	int y;
	int z;

};


int main() {
	setlocale(LC_ALL, "ru");
	string path = "myFile.txt";
	Point pt(1, 2, 3);
	ofstream fout;
	fout.open(path, ofstream::app);
	fout.write((char*)&pt, sizeof(Point));
	fout.close();
	ifstream fin;
	fin.open(path);
	Point pnt;
	while (fin.read((char*)&pnt, sizeof(Point))){

	}
	pnt.print();
	fin.close();

	return 0;
}

