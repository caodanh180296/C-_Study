#include <iostream>
#include <thread>
#include <atomic>
#include <chrono>


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
    atomic<int> count=0;
    const int ITERATIONS = 1000;

    thread t1([&count](){
        for(int i=0; i< ITERATIONS; i++)
        {
            ++count;
        }
    });

    thread t2([&count](){
        for(int i=0; i< ITERATIONS; i++)
        {
            ++count;
        }
    });

    t1.join();
    t2.join();
    
    cout <<count<<end; // waiting for the thread to finish.


    return 0;
}