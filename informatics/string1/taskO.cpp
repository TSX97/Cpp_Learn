#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string text;
	cin >> text;
	
	string ext;
	cin >> ext;
	
	int end;
	
	for(int i = text.size(); i >= 0; i--){
		
	if (text[i] == '.'){
			end = i;
		
			break;
		}
	}
	
	

	for(int i = 0; i < end; i++){
		cout << text[i];
	}
	cout << '.' << ext;
	
	return 0;
} 