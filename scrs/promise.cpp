#include <iostream>
#include <thread>
#include <chrono>
#include <future>
using namespace std;

void wait(int n) {

	this_thread::sleep_for(chrono::seconds(n));

}

void Tfunc2(double num) {
	wait(1);
	cout << "эта тоже, но у нее есть параметр num : " << num << endl;
}


int Tfunc3(int num) {
	return num *= 2;
}


int main() {
	setlocale(LC_ALL, "RU");

	auto Tfunc1{ []() {
		wait(1);
		cout << "это просто лямбда-функция" << endl;
		} };


	promise<int> ThreadPromise;

	future<int> ThreadFuture = ThreadPromise.get_future();

	thread MyThread([&ThreadPromise]() {ThreadPromise.set_value(Tfunc3(7));});


	cout << "я вне всех этих потоков" << endl;

	thread th1(Tfunc1);
	th1.join();


	thread th2(Tfunc2, 2.345);
	th2.join();
	
	cout << "до выполнения главного потока осталось :" << endl;
	for (int elem : {3, 2, 1}) {
		wait(1);
		cout << elem << endl;
	}

	wait(1);

	int result = ThreadFuture.get();
	cout << "результат : " << result << endl;

	MyThread.join();

}
