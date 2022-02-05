#include <string>
#include <iostream>

using namespace std;


class Pixel {
public:
	Pixel() {
		r = g = b = 0;	
	}
	Pixel(int r, int g, int b) {
		this->r = r;
		this->g = g;
		this->b = b;
		}
	string get_info() {
		return "Pixel r=" + to_string(r) + "\n" + "Pixel g=" + to_string(g) + "\n" + "Pixel b=" + to_string(b);
	}
private:
	int r,g,b;
};
	
int main(){
	
	return 0;
}
