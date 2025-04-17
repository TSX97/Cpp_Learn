#include <iostream>
#include <thread>
#include <mutex>
#define N_TH 16
using namespace std;

mutex mtx1;
mutex mtx2;


void scoped_func(int id){

	for ( int i = 0; i < 10; i++){

		{
		scoped_lock lock(mtx1, mtx2); //для захвата и управления двумя мьютексами
		cout << "thread №" << id << ", " << "iteration №" << i << endl;
		}
		this_thread::sleep_for(chrono::milliseconds(100));
	}
}



int main(){

	
	thread threads[N_TH];
	for ( int i = 0; i < N_TH; i++){
		threads[i] = thread(scoped_func, i);
	}
	
	for(auto &thread : threads){
		thread.join();
	}



	return 0;
}
