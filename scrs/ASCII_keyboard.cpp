#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;


void SetColor(int text, int background) {

	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}



int main() {
	setlocale(LC_ALL, "RU");

	int key;
	string symbol;
	while (1) {

		if (_kbhit()) {

			

			key = _getch();

			

			if (key == 27) {
				break;
				cout << "ты нажал ESCAPE";
			}


			else {


				symbol = key;

				if (key == 8) { symbol = "backspace"; }
				else if (key == 9) { symbol = "tab"; }
				else if (key == 32) { symbol = "space"; }
				cout << symbol << " это ";
				SetColor(0, 10);
				cout << key;
				SetColor(15, 0);
				cout << " в таблице ASCII-символов" << endl;
			}

			

		}






	}


	return 0;
}