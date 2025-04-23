#include <iostream>
using namespace std;





int main(){
	
	
	int size = 7;
	int arr[size] = {1, 2, 3, 4, 5, 6, 7};
	
	for(int* i = arr; i <= &arr[size - 1]; i++){
		cout << i << "\t" << *i << endl;
	}
	
	return 0;
}