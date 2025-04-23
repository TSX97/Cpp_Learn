#include <iostream>
using namespace std;

void hello(){
	cout << "hello" << endl;
}

void goodbye(){
	cout << "goodbye" << endl;
}
	
	


int main(){
	
	void (*message)();
	
	message = hello;
	message();
	
	message = goodbye;
	message();
   
	
	return 0;
}
