#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string text;
	cin >> text;
	text += '/';
	
	int start = 0;

	
	for(int i = 0; i < text.size(); i++){
		
		if( text[i] == '/' || text[i] == '\0'){
			for(int j = start; j < i; j++){
				cout << text[j];
			}
			start = i+1;
			cout << endl;
		}
	
	
	
		
	}
	
	
	
	
	return 0;
}