#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main() {
	
	string text;
	getline(cin, text);

	vector<string> words;

	int start = 0;

	for (int i = 0; i < text.size() + 1; i++) {

		if (text[i] == ' ' || text[i] == '\0') {
			words.push_back(text.substr(start + 1, i - start - 1));
			start = i;
		}


	}

	int max = 0;
	string max_elem;
	for (string elem : words) {
		if (elem.size() > max) {
			max = elem.size();
			max_elem = elem;
		}
	}
	cout << max_elem << endl << max;



	return 0;
}
