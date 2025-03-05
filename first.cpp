#include <iostream>
using namespace std;

int factorial(unsigned n){
	if(n == 1){
		return 1;
	}
	else if(n > 1){
		return n * factorial(n-1);
	} else return 0;
}

int main(){
	for(int i = 0; i < 11; i++){
		cout << factorial(i + 1) << "\n";
	}
	return 0;
}
