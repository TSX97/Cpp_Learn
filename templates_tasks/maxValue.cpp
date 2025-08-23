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
	
 cout << maxValue(5, 7);
 cout << maxValue(4.19, 2,96);
	cout << maxValue("abc", "def");
	
	return 0;
}