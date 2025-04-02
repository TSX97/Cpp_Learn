#include <iostream> 
#include <string>

using namespace std;

int main() {

	string text;
	cin >> text;

	string subA;
	cin >> subA;

	string subB;
	cin >> subB;

	int start = 0;


	for (int i = 0; i < text.size(); i++) {

		if (text.substr(i, subA.size()) == subA) {

			std::cout << subB;
			i += subA.size();
		}
		else {
			std::cout << text[i];
		}

	}



	return 0;
}
