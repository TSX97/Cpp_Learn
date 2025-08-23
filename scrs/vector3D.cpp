#include <iostream>
#include <cmath>
#include <memory>
using namespace std;

class Vector3D {


public:

    Vector3D(double x, double y, double z) : x(x), y(y), z(z) { }
    
    ~Vector3D() { 
	cout << "~3D Vector has been deleted~" << endl;
	}

     Vector3D(const Vector3D& v){
        x = v.x;
        y = v.y;
        z = v.z;
    }
	
	void print(){
		cout << "==vector==" << endl;
		cout << "x : " << this->x << endl;
		cout << "y : " << this->y << endl;
		cout << "z : " << this->z << endl;
		cout << endl;
	}

     double getLength() const {
        return pow(pow(x, 2) + pow(y, 2) + pow(z, 2), 0.5);
    }

     Vector3D operator + (const Vector3D& other){
        return Vector3D{x + other.x, y + other.y, z + other.z};
     }

	Vector3D operator - (const Vector3D& other){
        return Vector3D{x - other.x, y - other.y, z - other.z};
	}
	
	Vector3D operator * (const Vector3D& other){
        return Vector3D{x * other.x, y * other.y, z * other.z};
	}
	
	bool operator == (const Vector3D& other) const {
		return x == other.x && y == other.y && z == other.z;
	}

private:

    double x;
    double y;
    double z;



};

int main(){
	
    
	unique_ptr<Vector3D> v1 = make_unique<Vector3D>(8, 6, 24);
	
	cout << "v1 length: ";
	cout << v1->getLength() << endl;
	v1->print();
    
	unique_ptr<Vector3D> v2 = make_unique<Vector3D>(4, 3, 7);
	
	cout << "v2 length: ";
	cout << v2->getLength() << endl;
	v2->print();
	
	cout << "v1 + v2 = " << (*v1 + *v2).getLength() << endl;
	cout << "v1 - v2 = " << (*v1 - *v2).getLength() << endl;
	cout << "v1 * v2 = " << (*v1 * *v2).getLength() << endl;
	
	return *v1 == *v2;
} 

