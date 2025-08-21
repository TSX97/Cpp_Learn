#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

const static double pi = 3.14;


class Shape {

public:

  Shape(string name) : name(name) { }

  ~Shape() { }

  virtual double getArea() const {
    return 0;
  }

  virtual void print() const {
    cout << "Shape: " << this->name << endl;    
	cout << endl;
  }


protected:

  string name;  

};

class Rectangle: public Shape {

public:

  Rectangle(const string& name, double width, double height) : Shape(name), width(width), height(height) { }
  ~Rectangle() { }

  double getArea() const override {
    return this->width * this->height;
  }
  
  void print() const override {
    cout << "Shape: Rectangle" << endl;
    cout << "name: " << this->name << endl;
    cout << "width: " << this->width << endl;
    cout << "height: " << this->height << endl;
    cout << endl;
  }

private:

  double width;
  double height;

};


class Circle: public Shape {

public:

  Circle(const string& name, double radius) : Shape(name), radius(radius) { }
  
  ~Circle() { }
  
  double getArea() const override {
    return pi * pow(this->radius, 2);  
  }
  
  void print() const override {
    cout << "Shape: Circle" << endl;
    cout << "name: " << this->name << endl;
    cout << "radius: " << this->radius << endl;
    cout << endl;
  }

private:

  double radius;
  
};

int main(){
  
 vector<Shape*> shapes;
  
 shapes.push_back(new Shape("ABC"));
 shapes.push_back(new Rectangle("DEFG", 13, 7));
 shapes.push_back(new Circle("circle O", 5));
 
 double totalArea = 0;
 
 for(auto* shape: shapes){
 	shape->print();
	 totalArea += shape->getArea();
 }
 
 cout << "total Area: " << totalArea << endl;
  return 0;
}
