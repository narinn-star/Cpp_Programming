#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { 
		radius = 1; 
	}
	Circle(int r) {
		radius = r;
	}
	void setRadius(int r) {
		radius = r;
	}
	double getArea() {
		return radius * radius * 3.14;
	}
};

int main() {
	Circle circleArray[3] = { Circle(10), Circle(20), Circle() };

	for (int i = 0; i < 3; i++) {
		cout << "Circle " << i << "�� ������ " << circleArray[i].getArea() << endl;
	}
}