#include <iostream>
#include <string>
using namespace std;

class Animal{

    protected:

        string name = "";
        int weight = 0;
    
    public:

        Animal(string name, int weight){
            this->name = name; 
            this->weight = weight; 
        }
        
        virtual void makeSound(){cout << "sound" << endl;}

        void print(){
            cout << "Name: " << name << " Weight: " << weight << endl;
        }
};

class Cat: public Animal{

    public:

        Cat(string name, int weight): Animal(name, weight) {}


        void makeSound() override {
            cout << "meow" << endl;
        }

      
    
};

class Dog: public Animal{

    public:

        Dog(string name, int weight): Animal(name, weight) {}


        void makeSound() override {
            cout << "waf" << endl;
        }

      
    
};


int main()
{
    Cat murzik{"Murzik", 15};
    Dog pushok{"Pushok", 20};
 
    murzik.print();
    murzik.makeSound();
 
    pushok.print();
    pushok.makeSound();
}