#include <iostream>
using namespace std;

class Number{

public:

	int num;

	int factorial(int n){
		if(n == 1){
			return 1;
		}
		else if(n > 1){
			return n * factorial(n-1);
		} else return 0;
	}
	Number(int p_num){
		num = p_num;
	}


};



int main(){

	Number x = (5);

	for(int i = 0; i < 11; i++){
		cout << x.factorial(i + 1) << "\n";
	}
	return 0;
}
