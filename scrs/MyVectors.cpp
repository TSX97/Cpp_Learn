#include <iostream>
#include <string>
#include <array>
#include <cmath>
using namespace std;

class Point {

private:
	
	char name;
	int x;
	int y;


public:

	Point(int x, int y, char name): x(x), y(y), name(name) {
		
		cout << "Point" << name << "(x: " << x << ", y : " << y << ") was created" << endl;
	}


	~Point() { 
	
		// cout << "Point" << name << "(x: " << x << ", y: " << y << ") was deleted" << endl; 
	}


	Point(const Point& p) {
		this->x = p.x;
		this->y = p.y;
		this->name = p.name;
	}

	
	void print() {
		cout << "Point(x: " << x << ", y: " << y << ")" << endl;
	}

    
	char getName(){return this->name;}

    
	void setName(char name){this->name = name;}


	int getX(){return this->x;}


	void setX(int x){this->x = x;}


	int getY(){return this->y;}


	void setY(int y){this->y = y;}

};




class Vector{

	friend class Point;

private:

	Point p1;
	Point p2;

public:

	Vector(Point p1, Point p2): p1(p1), p2(p2) {
		
		cout << "Vector" << p1.getName() << p2.getName() << " was created" << endl;
	}

	
	~Vector(){

		// cout << "Vector " << p1.getName() << p2.getName() << " was deleted" << endl;
	}

	
	Vector(const Vector& v) = delete;


	Point getP1(){return p1;}


	Point getP2(){return p2;}
	
	
	void setP1(Point p1){ this->p1 = p1;}


	void setP2(Point p2){ this->p2 = p2;}




	void print(){
		cout << "Vector" << p1.getName() << p2.getName() << endl;
	}


	int length(){
		int result = pow(p2.getY() - p1.getY(), 2) + pow(p2.getX() - p1.getX(), 2);
		return pow(result, 0.5);
	}

};




// Vector sum(Vector v1, Vector v2){

// 	v1.setP1(v1.getP1().getX() + v2.getP1().getX());
// 	v1.setP1(v1.getP1().getY() + v2.getP1().getY());
// 	v1.setP1(v1.getP2().getX() + v2.getP2().getX());
// 	v1.setP1(v1.getP2().getY() + v2.getP2().getY());
// }



int main() {

	Point p1 = Point(4, 1, 'A');
	Point p2 = Point(7, 6, 'B');

	Vector v = {p1, p2};

	v.print();
	
	cout << v.length() << endl;
	
	
	
	
	
	return 0;
}
