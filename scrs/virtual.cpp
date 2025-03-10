#include <iostream>
using namespace std;


class Person
{
public:
    Person(string name): name{name}
    { }
    virtual void print() const  // виртуальная функция - функция которую дочерние классы могут переопределять
    {
        cout << "Name: " << name << endl;
    }
private:
    string name;
};
class Employee: public Person
{
public:
    Employee(string name, string company): Person{name}, company{company}
    { }
    void print() const override // явным образом указываем, что функция переопределена с помощью override. к слову final обозначает что переопределение запрещено
    {
        Person::print();
        cout << "Works in " << company << endl;
    }
private:
    string company;
};
  
int main()
{
    Person tom = {"Tom"};
    Person* person = {&tom};
    person->print();     
    Employee bob = {"Bob", "Microsoft"};
    person = &bob; //если не указать virtual, то будет работать print() класса Person, так как указатель указывает на Person
    person->print();     
}