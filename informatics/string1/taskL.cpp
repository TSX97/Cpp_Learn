#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string text;
	getline(cin, text);
	int start = 0;
	
	string name;
	string secondname;
	string lastname;
	

			
	name = text.substr(0, text.find(' ')) ;
	
	text.erase(0, text.find(' ')+1);
	
	secondname = text.substr(0, text.find(' ')) ;
	
	text.erase(0, text.find(' ')+1);
	
	lastname = text.substr(0, text.find(' ')) ;
	
	text.erase(0, text.find(' ')+1);
	
	cout << secondname[0] << ". ";

	
	cout << lastname[0] << ". ";
	
	cout << name;


	
	return 0;