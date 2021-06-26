#include <iostream>
#include <thread>
#include <atomic>
#include <chrono>
#include <mutex>

using namespace std;

void work(int &count, mutex &mtx)
{
    for(int i=0; i< 1E6; i++)
    {
        lock_guard<mutex> guard(mtx); // different kinds of mutex, timed mutex
        ++count;
        
    }
}

int main()
{
    int count=0;
    
    mutex mtx;

    thread t1(work, ref(count), ref(mtx)); // trick to pass reference
    thread t2(work, ref(count), ref(mtx));

    t1.join();
    t2.join();
    
    cout <<count<<end; // waiting for the thread to finish.


    return 0;
}