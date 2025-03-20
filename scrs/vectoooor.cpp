#include <iostream>
#include <vector>
using namespace std;


int main(){
	
	vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	
	
	for(auto iter = numbers.begin(); iter != numbers.end(); ++iter){
		cout << *iter << endl;
	}
	
	
	
	
	
	return 0;
}