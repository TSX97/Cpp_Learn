#include <iostream>
#include <thread>
#include <mutex>
#define N_TH 10

using namespace std;

mutex mtx;

void print_id(int id){
	
	unique_lock<mutex> ul(mtx, defer_lock);

	cout << "Поток №" << id << " работает без блокировки мьютекса" << endl;
	ul.lock(); //ебать комменты
		   //
	this_thread::sleep_for(chrono::milliseconds(500));
		
	cout << "Поток №" << id << " работает под блокировкой мьютекса" << endl;
	ul.unlock(); 

	cout << "Поток №" << id << " завершает работу" << endl;
}

int main(){

	thread threads[N_TH];

	for (int i = 0; i < N_TH; i++){
		threads[i] = thread(print_id, i);
	}

	for(int i = 0; i < N_TH; i++){
		threads[i].join();
	}

	return 0;
}
