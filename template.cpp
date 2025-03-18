#include <iostream>
using namespace std;



template <typename T> add(T a, T b) {
    return a+b;
}

template <typename T>
class Person{
	private: 
		T id;
		string name;
		int age;
		
	public:
		
		Person(T id, string name, int age){
			this->id = id;
			this->name = name;
			this->age = age;
		}
		
		void printId(){
			cout << "Id: " << id << endl;
		}
	
	
	
	
	
};

int main(){
	Person<string> Boris = {"partner", "Boris", 16};
	Person<int> Pasha = {0, "Pasha", 16};
    Boris.printId();
	Pasha.printId();
    cout << add(1, 5) << endl << add(1.6, 7.9);
}