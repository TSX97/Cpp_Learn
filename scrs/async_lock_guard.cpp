#include <iostream>
#include <thread>
#include <mutex>
#include <future>

using namespace std;

int id = 0;
mutex mtx;


int print_id() {

	lock_guard<mutex> lock(mtx);

	id++;
	this_thread::sleep_for(chrono::milliseconds(500));

	return id;
}


int main() {

	setlocale(LC_ALL, "RU");

	const int N_THREADS = 10;

	future<int> threads[N_THREADS];

	for (int i = 0; i < N_THREADS; i++) {

		threads[i] = async(print_id);

	}

	for (int i = 0; i < N_THREADS; i++) {

		cout << "Поток №" << threads[i].get() << " работает успешно" << endl;
	}

	return 0;
}