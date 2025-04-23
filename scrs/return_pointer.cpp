#include <iostream>
using namespace std;



int* max(int* a, int* b){
	
	if(*a > *b){
		return a;
	} else {
		return b;
	}
	
	
	
	
}

int main(){
	
	int n = 7;
	
	int m = 4;
	
	int* ptr = max(&n, &m);
	cout << ptr << " -> " << *ptr;
   
	
	return 0;
}
