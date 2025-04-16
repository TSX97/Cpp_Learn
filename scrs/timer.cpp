#include <iostream>
#include <thread>

using namespace std;

int main(){

	int minuts;
	cin >> minuts;

	for(int i = minuts - 1; i >= 0; i--){
		for(int j = 59; j >= 0; j--){
			


			
			if ( i < 10){ cout << 0;}
			
			cout << i << ":";
			if (j < 10){ cout << 0;}
		       	cout << j << endl;
			
			this_thread::sleep_for(chrono::seconds(1));	
			
		}	
	}

	return 0;
}
