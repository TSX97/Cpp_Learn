#include <iostream>
#include <thread>
#include <chrono>
#include <future>
using namespace std;

void wait(int n) {

	this_thread::sleep_for(chrono::seconds(n));

}




int Tfunc(int a, int b) {
	return a + b;
}


int main() {
	setlocale(LC_ALL, "RU");

	int x = 8;
	int y = 9;

	future<int> AsyncFuture = async(Tfunc, 8, 9);

	auto print{ [&x, &y]() {std::cout << "мы сложим " << x << " и " << y << endl;} };
	
	thread th1(print);
	th1.join();

	std::cout << "до выполнения главного потока осталось :" << endl;
	for (int elem : {3, 2, 1}) {
		wait(1);
		std::cout << elem << endl;
	}

	wait(1);

	int result = AsyncFuture.get();
	std::cout << "результат нашей асинхронной функции : " << result << endl;
	
	return 0;
}


