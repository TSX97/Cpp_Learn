#include <iostream>
#include <memory>
#include <vector>
using namespace std;


int main(){
	
	int len; //заодно работа со 
	cin >> len; // smart указателями
	auto nums = make_unique<int[]>(len);
	
	
	
	for(int i = 0; i < len; i++){
		nums[i] = i * i;
	}
	
	int count = 0;
	for(int i = 0; i < len; i++){
		count += nums[i];
		cout << nums[i] << endl;
}
	
	cout << count;
	
	
	return 0;


}