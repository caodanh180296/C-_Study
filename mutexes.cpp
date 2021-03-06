#include <iostream>
#include <thread>
#include <atomic>
#include <chrono>
#include <mutex>

using namespace std;

void work()
{
    for(int i=0; i<10; i++)
    {
        this_thread::sleep_for(chrono::milliseconds(500)); // delay we can see thay run same time
        cout<<"Loop"<<i<<endl;
    }
}

int main()
{
    int count=0;
    const int ITERATIONS = 1000;
    
    mutex mtx;


    auto func=[&]()
    {
        for(int i=0; i< ITERATIONS; i++)
        {
            mtx.lock();
            ++count;
            mtx.unlock();
        }
    };

    thread t1(func);

    thread t2(func);

    t1.join();
    t2.join();
    
    cout <<count<<end; // waiting for the thread to finish.


    return 0;
}