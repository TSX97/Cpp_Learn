#include <iostream> 
#include <string>

using namespace std;

int main() {

	string text;
	cin >> text;

	string sub;
	cin >> sub;



	int cnt = 0;


	for (int i = 0; i < text.size(); i++) {

		if (text.substr(i, sub.size()) == sub) {

			cnt++;
		}
		else {
	
		}

	}

	std::cout << cnt;

	return 0;
}
