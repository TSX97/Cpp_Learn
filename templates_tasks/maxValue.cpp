#include <iostream>
#include <string>
using namespace std;

template <typename T>
T maxValue(T first, T second){
	if (first > second){
		return first;
	}
	return second;
}

int main(){
	
	cout << maxValue("abc", "def");
	
	return 0;
}