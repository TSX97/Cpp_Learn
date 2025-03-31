#include <iostream>
#include <string>
#include <array>
#include <cmath>
using namespace std;

class Point {

private:
	string name;
	int x;
	int y;


public:

	Point(int x, int y) {
		this->x = x;
		this->y = y;
		cout << "Point" << name << "(x: " << x << ", y : " << y << ") was created" << endl;
	}

	~Point() { cout << "Point" << name << "(x: " << x << ", y: " << y << ") was deleted" << endl; }

	Point(const Point& p) {
		this->x = p.x;
		this->y = p.y;
	}

	void print() {
		cout << "Point(x: " << x << ", y: " << y << ")" << endl;
	}

};


class Vector{

	friend class Point;

private:

	Point p1;
	Point p2;

public:
	Vector(Point p1, Point p2) {
		
		this->p1 = p1;
		this->p2 = p2;
		cout << "Vector " << p1.name << p2.name << " was created" << endl;
	}




};




int main() {

	Point* p = new Point(1, 3);

	p->print();

	delete p;


	return 0;
}