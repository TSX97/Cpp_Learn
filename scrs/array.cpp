#include <iostream>
#include <array>

using namespace std;

int main() {
	int const len = 59;
	cout << endl;
	
	array<int, len> arr = {};
	for (int i = 0; i < len; i++) {
		arr.at(i) = (i + 1) * (i + 1);
	}

	for (int i = 0; i < len; i++) {
		for (int j = 0; j < i; j++) {
			cout << "  ";
		}
		cout << arr.at(i) << endl;
	}

	return 0;
}