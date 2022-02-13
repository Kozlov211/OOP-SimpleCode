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
	int x;
	int y;
	int z;

};

ostream& operator<<(ostream& os, const Point& point){
	os << point.x << ' ' << point.y << ' ' << point.z;
	return os;
}

ifstream& operator>>(ifstream& is,  Point& point) {
	is >>point.x>>point.y>>point.z;
	return is;
}

int main() {
	setlocale(LC_ALL, "ru");
	Point point(1,2,3);
	cout << point << endl;
	cout << "Введите три точки" << endl;
	return 0;
}

