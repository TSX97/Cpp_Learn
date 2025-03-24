#include <iostream>
#include <string>
#include <stack>
#include <set>
#include <map>
using namespace std;


void print_push(string value) {
	cout << value << " добавлен в стек" << endl;
}





int main() {
	setlocale(LC_ALL, "RU");


	cout << "Работа со структурой данных stack" << endl << endl;

	stack<unsigned> nums;
	for (unsigned i = 1; i <= 52; i++) {
		nums.push(i * i);
	}

	while (!nums.empty()) {

		cout << nums.top() << "|";
		nums.pop();

	}
	cout << endl << endl << endl;



	cout << "Работа со структурой данных set" << endl;

	set<string> c_like_langs = { "C", "C++", "C#" };

	cout << "set c_like_langs инициализирован со значениями C, C++, C#" << endl;

	c_like_langs.insert("D");
	print_push("D");

	c_like_langs.insert("Rust");
	print_push("Rust");

	c_like_langs.insert("Rust");
	print_push("Rust");

	c_like_langs.insert("Java");
	print_push("Rust");
	cout << "Rust уже есть в стеке" << endl;

	c_like_langs.insert("Python");
	print_push("Python");
	cout << "Python это не С-подобный язык программирования" << endl;
	c_like_langs.erase("Python");
	cout << "Python удален" << endl;

	for (string elem : c_like_langs) {
		cout << elem << " ";
	}

	cout << endl << endl << endl;




	cout << "Работа со структурой данных stack" << endl << endl;

	map<string, float> products{
		{"tomato", 0.5},

		{"milk", 1},

		{"eggs", 1.4}
		
	};

	for (auto& elem : products) {
		cout << elem.first << " : " << elem.second << "$" << endl;
	}

	return 0;
}
