#include <iostream>
#include <thread>
#include <chrono>
#include <future>
using namespace std;


long long factorial(int n) {
	if (n <= 1) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}

}


int	main(){

	long long ull = 13;

	future<long long> ThreadFuture = async(factorial, ull);
	int result = ThreadFuture.get();

	cout << result;



	return 0;
}


