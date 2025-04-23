#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	vector<int> arr = {1, 4, 5, 7, 3, 2, 8};
	
	for(auto iter = arr.end() - 1; iter != arr.begin() - 1; iter--){
		
	
		cout << *iter;
	}

   
	
	return 0;
}
