#include <iostream>
#include <mutex>
#include <condition_variable>
#include <thread>
#include <unistd.h>

using namespace std;

// Глобальные переменные
mutex mtx;
condition_variable cv;
bool ready = false; // Условие, на котором основано ожидание

// Функция потока, ожидающего события
void waiting_thread() 
{
	unique_lock<std::mutex> lck(mtx);

	while (!ready) 
    {
        cout << "Ожидающий поток: ждем сигнала...\n";
        cv.wait(lck);
    }
    cout << "Ожидающий поток: получен сигнал.\n";
}

// Функция потока, посылающего сигнал
void signaling_thread() 
{
    sleep(1); // Имитация работы
    unique_lock<std::mutex> lck(mtx);
    ready = true;
    cout << "Сигнализирующий поток: выдаем сигнал.\n";
    cv.notify_all();
}

int main() 
{
    thread w_thread(waiting_thread);
    thread s_thread(signaling_thread);

    w_thread.join();
    s_thread.join();

    return 0;

}
