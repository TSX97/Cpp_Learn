#include <iostream>
#include <string>
using namespace std;





bool myStartWith(string str1, string str2) {

	if (str1.length() < str2.length()) { str1.swap(str2); }

	for (int i = 0; i < str2.length(); i++) {
		if (str2[i] != str2[i]) {
			return false;
		}

	}
	return true;
}

int main() {

	setlocale(LC_ALL, "RU");

	string lastname;
	cin >> lastname;

	for (int i = 0; i < lastname.length(); i++) {

		cout << lastname.substr(0, i+1) << endl;
	}


	for (int i = 1; i < lastname.length(); i++) {

		cout << lastname.substr(i) << endl;
	}

	cout << boolalpha << myStartWith(lastname, "hello");

	






	return 0;
}