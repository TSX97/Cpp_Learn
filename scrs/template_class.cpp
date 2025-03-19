#include <iostream>
#include <string>

using namespace std;

template <typename T>
class Creature {
private:
  T id;
  T* ptr = &id; // инициализация ptr

public:
  Creature(T id) : id(id) {}

  void print() {
    cout << "Creature id: " << id << " ptr: " << ptr << endl;
  }

    T getId() const { return id; } // Добавлено для доступа к id
};

template <>
class Creature<unsigned> {
private:
  unsigned id;
  unsigned* ptr = &id;

public:
  static unsigned count;

  Creature() {
    count++;
    id = count;
  }

  void print() {
    cout << "Creature id: " << id << " ptr: " << ptr << endl;
  }
  unsigned getId() const { return id; } // Добавлено для доступа к id
};

template<> unsigned Creature<unsigned>::count = 0;


template <typename T>
class Person : public Creature<T> { // Наследуемся от Creature<T>
private:
  string name;

public:
  Person(T id, string name) : Creature<T>(id), name(name) {}

  void print() {
    cout << "Person id: " << this->getId() << " name: " << name << endl; // Используем getId()
  }
};



int main() {
  Creature<int> Ghi = {7};
  Ghi.print();

  Creature<string> Klo = {"snake"};
  Klo.print();

  Creature<unsigned> Qrs = {};
  Qrs.print();

  Creature<unsigned> Tsx = {};
  Tsx.print();

  Person<int> Alex = {16, "Alexandr"};
  Alex.print();

  return 0;
}