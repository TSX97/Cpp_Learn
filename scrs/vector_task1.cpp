#include <iostream>
#include <vector>
using namespace std;


int main(){
	

	int len;
	
	cin >> len;
	
	vector<int> nums;
	
	int num;
	
	
	for(int i = 0; i < len; i++){
		cin >> num;
		nums.push_back(num);
	}
	
	
  	for(auto iter = nums.rbegin(); iter != nums.rend(); ++iter){ //попробуйте поменять третье значение на --iter, выводятся свободные ячейки памяти + иногда мусор
	  
	  	cout << *iter << endl;
	}
	return 0;

}