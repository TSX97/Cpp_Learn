#include <iostream>
#include <string>
using namespace std;


class Point {


    friend class Person;
    
    
    private:
        int x;
        int y;
    
    
    public:
        Point(int x, int y) : x(x), y(y) {} //конструктор
    
    
        int getX() const {return this->x;}  // геттеры и сеттеры
    
        int getY() const {return this->y;}  // геттеры и сеттеры
    
        void setX(int x) {this->x = x;}  // геттеры и сеттеры
    
        void setY(int y) {this->y = y;}  // геттеры и сеттеры

    
        void show() const {cout << "x : " << this->x << "  y : " << this->y << endl;}
    
        Point& move(int x, int y) {
            this->x += x;
            this->y += y;
            return *this;
        }
};
    


class Person {


private:

    string name;
    unsigned short age;
    int memx;
    int memy;


public:
    
    Person(string p_name = "Und", unsigned short p_age = 18) : name(p_name), age(p_age), memx(0), memy(0) {} //конструктор


    void print() const {cout << "Name: " << name << "\tAge: " << age << endl;}


    unsigned int getAge() const {return age;}  // геттеры и сеттеры

    string getName() const {return name;}  // геттеры и сеттеры

    void setAge(unsigned int new_age) {age = new_age;}  // геттеры и сеттеры

    int getMemX() const {return memx;}  // геттеры и сеттеры

    int getMemY() const {return memy;}  // геттеры и сеттеры

    void setMemX(int value) {memx = value;}  // геттеры и сеттеры

    void setMemY(int value) {memy = value;}  // геттеры и сеттеры

    void memoryAccess(Point &point){ //функция запоминалка
        setMemX(point.x);
        setMemY(point.y);
    }
};




void lfunc(Point p, int size, int k = 1) { //функции графические
    p.show();
    for (int i = 0; i < size; i++) {
        p.move(k, 1).show();
    }
}

void parabola(Point p, int size) { //функции графические
    p.show();
    for (int i = 1; i < size + 1; i++) {
        p.setX(i * i);
        p.setY(i);
        p.show();
    }
}

int main() {
    Point p1(1, 2);
    Person arhip("Arhip", 30);

    arhip.memoryAccess(p1);

    cout << "Person memx: " << arhip.getMemX() << "  memy: " << arhip.getMemY() << endl;
    p1.move(1, 3);
    arhip.memoryAccess(p1);
    cout << "Person memx: " << arhip.getMemX() << "  memy: " << arhip.getMemY() << endl;

    return 0;
}
