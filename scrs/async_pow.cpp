#include <iostream>
#include <thread>
#include <mutex>
#include <future>
using namespace std;

mutex mtx;

int pow(int value){
    lock_guard<mutex> lock(mtx);
    this_thread::sleep_for(chrono::seconds(1));
    return value * value;
}


int main(){

    const int N_THREADS = 11;

    future<int> threads[N_THREADS];

    for(int i = 1; i < N_THREADS; i++){
        threads[i] = async(pow, i); 
        cout << i << " * " << i << " = " << threads[i].get() << endl;
    }


    return 0;
}
