#include <iostream>
#include <thread>
#include <memory>
#include <mutex>

using namespace std;

int cnt = 0;
mutex mtx;

static void count() {

	mtx.lock();
	int current_cnt = ++cnt;
	std::cout << current_cnt << std::endl;
	mtx.unlock();

}

int main() {

	thread threads[6];

	for (int i = 0; i < 6; i++) {
		threads[i] = thread(count);
	}

	for (int i = 0; i < 6; i++) {
		threads[i].join();
	}

	return 0;
}
