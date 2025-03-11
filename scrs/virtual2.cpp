#include <iostream>
#include <string>
using namespace std;

void sep(){ cout << endl; }


class Person {


private:
    int age;
    string name;


public:
    Person(int age, string name) : age(age), name(name) {}

    int getAge() { return age; }

    string getName() { return name; }

    void setAge(int age) { this->age = age; }

    virtual void print() {
        cout << "name: " << name << " age: " << age << endl;
    }
};





class Programmer : public Person {


private:
    int exp;
    string lang;


public:
    Programmer(int age, string name, int exp, string lang) : Person(age, name), exp(exp), lang(lang) {}

    int getExp() { return exp; }

    string getLang() { return lang; }

    void setExp(int exp){ this->exp = exp; }

    void setLang(string lang){ this->lang = lang; }

    virtual void print() override {
        cout << "name: " << getName() << " age: " << getAge() << " exp: " << exp << " lang: " << lang << endl;
    }
};




class Junior : public Programmer {


private:
    string drc; // direction - направление



public:
    Junior(int age, string name, int exp, string lang, string drc) : Programmer(age, name, exp, lang), drc(drc) {}

    void print() override {
        cout << "name: " << getName() << " age: " << getAge() << " exp: " << getExp() << " lang: " << getLang() << " direction: " << drc << endl;
    }

    string getDrc() { return drc; }

    void setDrc(string drc){ this->drc = drc;}

    void askStupidQuestion() {
        cout << getName() << " fuck brain" << endl; //оьй блять не могу к приватным полям родительского класса без геттеров обратиться
    }    // извините забыл у нас же в стране инкапсуляция
    
};

int main() {
    Person person1(17, "sereja"); 
    person1.print();
    person1.setAge(18);
    cout << "happybirthday\n";
    person1.print();

    sep();
    
    Programmer programmer(16, "pasha", 2, "C++"); 
    programmer.print();
    programmer.setAge(17);
    cout << "happybirthday\n";
    programmer.print();
    
sep();

    Junior jun(19, "matvey", 1, "Python", "Web");
    jun.print(); 
    jun.askStupidQuestion();

    Person person2 = {static_cast<Person>(person1)};
    person2.print(); // ээээээээээээээ надо дописать конструктор копирования в классах + деструктор желательно
    return 0;
}



//ебал я в рот IDE на телефоне X(