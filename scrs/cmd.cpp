#include <iostream>
#include <string>

#include <chrono>
#include <thread>
using namespace std;


int main(){
	setlocale(LC_ALL, "RU");

	string text = "настя я те... дай попарить пж";
	string ABC = " абвгдеёжхийклмнопрстуфхцчшщъыьэюяФБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ.";
	string result = "";
	for (int i = 0; i < text.size(); i++) {
		
		for (int j = 0; j < ABC.size(); j++) {
			this_thread::sleep_for(chrono::milliseconds(50));
			cout << ABC[j];
			system("cls");	
			if (ABC[j] == text[i]) {
				result += ABC[j];
				cout << result;
				this_thread::sleep_for(chrono::seconds(1));
				break;
			}
		
		}
	} 

	return 0;
}
