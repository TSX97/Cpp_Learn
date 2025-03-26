#include <iostream>
#include <vector>
#include <string>

using namespace std;


vector<string> split(string words) {
	
	vector<string> result;
	
	int start = 0;

	for (int i = 0; i <= words.size(); i++) {

		if (words[i] == ' ') {
			
			result.push_back(words.substr(start, i - start));
			
			start = i + 1;
		}

		else if (words[i] == '\0') {
			result.push_back(words.substr(start, i));
		}


	}

	return result;



}

int main() {
	
	string words = "Hello! i am learning C++. I like Computer Science, structs of data and alghoritms";

	vector<string> vec_str = split(words);
	for (string elem : vec_str) {
		cout << elem << endl;
	}

	return 0;
}