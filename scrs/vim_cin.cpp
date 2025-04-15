#include <iostream>
#include <thread>
using namespace std;

int main(){

	string text;
	getline(cin, text);

	cout << endl;
	
	for(char elem : text){
		cout << elem << endl;
		this_thread::sleep_for(chrono::seconds(1));
	}

	return 0;
}
