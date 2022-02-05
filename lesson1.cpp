#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Human {
// Тело класса
public: // Модификатор доступа
    int weigth; // Свойство класса 
    int age; // Свойство класса
    string name; // Свойство класса
    void Print(){
    	cout << "Age " << age << "name " << name << "Weigth " << weigth << endl; 
    }
};

class Point {
public:
    Point(int x = 0, int y = 0){
       this->x = x;
       this->y = y;
    }
    int get_x(){
        return x;
    }
    int get_y() {
    	return y;
    }
    void set_x(int x){
    	this->x = x;
    }
    void  set_y(int y){
        this->y = y;
    }
    void Print(){
        cout << "X = " << x << " Y = " << y << endl;
    }
    bool operator== (const Point &other) {
	return this->x == other.x && this->y == other.y;
    }
    bool operator!= (const Point &other) {
    	return !(this->x == other.x && this->y == other.y);
    }
    bool operator> (const Point &other) {
    	return sqrt(this->x*this->x + this->y*this->y) > sqrt(other.x*other.x + other.y*other.y);
    }
    Point operator+ (const Point &other) {
    	Point tmp;
	tmp.x = this->x + other.x;
	tmp.y = this->y + other.y;
	return tmp;
    }
    Point & operator++() {
    	this->x++;
	this->y++;
	return *this;
    }
    Point & operator++(int value) {
	Point tmp(*this);
    	this->x++;
	this->y++;
	return tmp;
    }
    friend void Change_x(Point &value);
private:
    int x;
    int y;
};

class Myclass {
    public:
	Myclass(int size){
		this->size = size;
    		data = new int [this->size];
    		for (int i = 0; i < this->size; i++) {
			data[i] = i;
	    	}
		cout << "Myclass constr:" << this << endl;
	}
	~Myclass() {
    		cout << "Myclass destr:" << this << endl;
    		delete[] data;
	
	}
	Myclass(const Myclass &other) {
		 cout << "Work constr copy: " << this <<  endl;
		 this-> size = other.size;
		 data = new int[this->size];
	   	 for (int i = 0; i < this->size; i++){
		 	this->data[i] = other.data[i];
		 }
	}
	Myclass & operator= (const Myclass &other) {
		cout << "Work operator = " << this << endl;
		if (this->data != nullptr) {
			delete[] this->data;
		}
		this->size = other.size;
	        data = new int[this->size];
	        for (int i = 0; i < this->size; i++){
			this->data[i] = other.data[i];
		}
	
		return *this;
	}
    private:
	int *data;
	int size;
};

void foo(Myclass value){
    cout << "Work foo" << endl;
}

Myclass foo2(){
    cout << "Work foo2" << endl;
    Myclass tmp(2);
    return tmp;
}


class Testclass {
public:
	int & operator[] (int index) {
		return arr[index];
	}
private:
	int arr[5] {1, 2, 3, 4, 5};
};

void Change_x(Point &value) {
	value.x = -1;
}

int  main() {
    //Myclass a(5);
    //foo(a);
    //Myclass a = foo2();
    //Myclass b(2);
    // b = a;
    //Point a(1, 1);
    // Point b(2, 5);
    //cout << a.get_x() << " " << a.get_y() << endl;
    //a++;
    //cout << a.get_x() << " " << a.get_y() << endl;
    //Point c = a + b;
    //cout << c.get_x() << "\n" << c.get_y() << endl; 
    //bool result = b > a;
    //cout << result << endl;
    //Testclass a;
    //cout << a[2] << endl;
    Point a(5, 12);
    a.Print();
    Change_x(a);
    a.Print();

return 0;
}
