#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

int id = 0;
mutex mtx;


void print_id() {

	lock_guard<mutex> lock(mtx);

	id++;
	cout << "Поток " << id << " работает в безопасной секции" << endl;

	this_thread::sleep_for(chrono::milliseconds(500));
}


int main() {

	setlocale(LC_ALL, "RU");

	const int N_THREADS = 10;

	thread threads[N_THREADS];

	for (int i = 0; i < N_THREADS; i++) {

		threads[i] = thread(print_id);

	}

	for (int i = 0; i < N_THREADS; i++) {

		threads[i].join();
	}

	return 0;
}