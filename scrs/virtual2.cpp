#include <iostream> //доработать
#include <string>
using namespace std;


class Person{
 

 private:
  int age;
  string name;
  
 public:
  Person(int age, string name): age(age), name(name) {}
  
  int getAge(){return age;}
  
  string getName(){return name;}
  
  virtual void print() const {
   cout << "name: " << name << " age: " << age << endl;
  }
};



class Programmer: public Person{
 

 private:
  int exp;
  string lang;
  
 public:
  
  Programmer(int age, string name, int exp, string lang): Person(age, name), exp(exp), lang(lang) {}
  
  
 
  int getExp(){return exp;}
  
  string getLang(){return lang;}
  
  virtual void print() override const {
   cout << "name: " << getName() << " age: " << getAge() << " exp: " << exp << " lang: " << lang << endl;
  }
  
  
};




class Junior: public Programmer{
 
 private:
 
  string drc; //direction - направление
 
 public:
  
  Junior(int age, string name, int exp, string lang, string drc): Person(age, name), Programmer(exp, lang), drc(drc) {}
  
  void print(){
   cout << "name: " << getName() << " age: " << getAge() << " exp: " << getExp() << " lang: " << getLang() <<  " direction: " << drc << endl;
  }
  
  string getDrc(){return drc;}
  
  void askStupidQuestion(){
   cout << "fuck brain" << endl;
  }
  

  
  
  
  
  
};



int main(){
 Person person = {17, "sereja"};
 person.print();
 
 Programmer programmer = {16, "pasha", 2, "C++"};
 programmer.print();
 
 Junior jun = {19, "matvey"}
 
 
 
 return 0;
}
