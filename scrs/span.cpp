#include <iostream>
#include <vector>
#include <span>

using namespace std;

double arith_mean(span<double> items) {

	double sum = 0;

	for (double elem : items) {
		sum += elem;

	}

	return sum / items.size();

}
int main() {

	vector<double> nums = { 1.0, 2.123, 54.612, 9.143 };

	cout << arith_mean(nums);



	return 0;
}