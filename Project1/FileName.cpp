#include <iostream>
using namespace std;

class figure {
public:
	virtual int aera() const = 0;

	virtual int perimeter () const = 0;
};

class circle : public figure {
public:
	circle (int r) : radius(r) {}

	int aera() const override {
		return 3.14 * radius * radius;
	}

	int perimeter() const  override {
		return 2 * 3.14 * radius;
	}

private:
	int radius; 
};

class triangle : public figure {
public:

	triangle (int catet1, int catet2, int hipotenuza) : a(catet1), b(catet2), c(hipotenuza) {}

	int aera() const override {
		return a * b * c;
	}

	int perimeter() const override {
		return a + b + c;
	}

private:
	int a;
	int b;
	int c;
};
	

int main() {
	circle c(7);
	triangle t(3, 4, 5);

	figure* shape = &c;
	cout << "Circle aera " << shape->aera() << endl;
	cout << "Circle perimeter " << shape->perimeter() << endl;

	shape = &t;
	cout << "triangle aera " << shape->aera() << endl;
	cout << "triangle perimeter " << shape->perimeter() << endl;


	return 0;
}