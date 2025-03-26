#include <iostream>
#include <string>
#include <vector>
using namespace std;





template<typename T>
T find_max(vector<T>& arr) {
	
	int max = 0;

	for (int i = 0; i < arr.size(); i++) {
		if (arr.at(i) > arr.at(max)) {
			max = i;
		}
	}
	return max;

}




template<typename T>
void Sorting_by_selection(vector<T>& arr) {

	vector<T> new_arr;
	T max_index;
	while (!arr.empty()) {
		max_index = find_max(arr);
		new_arr.push_back(arr[max_index]);
		arr.erase(arr.begin() + max_index);
	}
	arr = new_arr;
}


template <typename T>
void print(vector<T>& arr){
	
	for (T elem : arr) {
		cout << elem << "\t";
	}

	cout << endl;

}



int main() {

	vector<char> keyboards = { 'q', 'w', 'e', 'r', 't', 'y' };
	vector<int> mmr = { 1000, 2300, 1400,  4300, 3000 };
	vector<string> cigarettes = { "Winston", "Camel", "Chapman", "Kent", "Marlboro" };

	Sorting_by_selection(keyboards);
	Sorting_by_selection(mmr);
	Sorting_by_selection(cigarettes);

	print(keyboards);
	print(mmr);
	print(cigarettes);





	return 0;
}