#include <iostream>
#include <vector>
#include <string>
using namespace std;

string oft(int value){
	if(value == 1){return "1";}
	if(value == 2){return "4";}
	if(value == 3){return "3";}
	return "error";
}

int main(){
	
	
	//верх

	
	int weight;
	cin >> weight;
	int cnt = 1;
	{
	for(int i = 0 ; i < weight; i++){		
		
		cout << " ";
		
		
		
		for(int j = 0; j < weight - 1 - i; j++){
			
		
			cout << " ";
		}
		
		for(int j = weight - 1 - i; j < weight; j++){
			
			if(cnt == 4){cnt = 1;}
		
			cout << oft(cnt) << " ";
			
			cnt++;
		}
		
		
		cout << endl;
	}
	
	}
	
	//теперь низ
	
	
	
	for(int i = 0; i < weight; i++){
		for(int j = weight - 1 - i; j < weight; j++){
			cout << "  ";
		
		}
		
		for(int j = i; j < weight; j++){
			if(cnt == 4){cnt = 1;}
		
			cout << oft(cnt) << " ";
			
			cnt++;
		}
		cout << endl;
	}
		
		
	return 0;
}
