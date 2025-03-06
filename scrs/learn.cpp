#include <iostream>
#include <string>
using namespace std;


class Point;


class Person {
private:
    string name;
    unsigned short age;
    int memx;
    int memy;

public:
    Person(string p_name = "Und", unsigned short p_age = 18) : name(p_name), age(p_age), memx(0), memy(0) {}

    void print() const {
        cout << "Name: " << name << "\tAge: " << age << endl;
    }

    unsigned int getAge() const {
        return age;
    }

    string getName() const {
        return name;
    }

    void setAge(unsigned int new_age) {
        age = new_age;
    }

    int getMemX() const { return memx; }

    int getMemY() const { return memy; }

    void setMemX(int value) { memx = value; }

    void setMemY(int value) { memy = value; }

    friend void memoryAccess(Person& pers, Point& point);
};

class Point {
private:
    int x;
    int y;

public:
    Point(int x, int y) : x(x), y(y) {}

    int getX() const {
        return this->x;
    }

    int getY() const {
        return this->y;
    }

    void setX(int x) {
        this->x = x;
    }

    void setY(int y) {
        this->y = y;
    }

    void show() const {
        cout << "x : " << this->x << "  y : " << this->y << endl;
    }

    Point& move(int x, int y) {
        this->x += x;
        this->y += y;
        return *this;
    }
};

void memoryAccess(Person& pers, Point& point) {
    pers.setMemX(point.getX());
    pers.setMemY(point.getY());
}

void lfunc(Point p, int size, int k = 1) { // Передача по значению
    p.show();
    for (int i = 0; i < size; i++) {
        p.move(k, 1).show();
    }
}

void parabola(Point p, int size) { // Передача по значению
    p.show();
    for (int i = 1; i < size + 1; i++) {
        p.setX(i * i);
        p.setY(i);
        p.show();
    }
}

int main() {
    Point p1(10, 20);
    Person arhip("Arhip", 30);

    memoryAccess(arhip, p1);

    cout << "Person memx: " << arhip.getMemX() << "  memy: " << arhip.getMemY() << endl;

    Point p2(0, 0);
    lfunc(p2, 5, 2);
    p2.setX(0);
    p2.setY(0);
    lfunc(p2, 5);
    memoryAccess(arhip, p2);
    cout << "Person memx: " << arhip.getMemX() << "  memy: " << arhip.getMemY() << endl;

    return 0;
}
