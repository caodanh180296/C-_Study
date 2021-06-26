#include <iostream>
#include <cmath>
#include <iomanip> // to set precision
#include <thread>
#include <chrono>
#include <future>
#include <exception>
#include <condition_variable>


using namespace std;

int main()
{
    condition_variable condition;
    mutex mtx;

    bool ready = false; //do not need to use atomic, because we use in proper thread synchornization
    
    thread t1([&](){
        this_thread::sleep_for(chrono::milliseconds(2000));
        unique_lock<mutex> lock(mtx); // both of unique lock needs to use same mutex
        ready = true;
        lock.unlock();
        condition.notify_one();
    });
    
    unique_lock<mutex> lock(mtx); // both of unique lock needs to use same mutex
    while(!ready)
    {
        condition.wait(lock);
    }

    cout<<"ready "<<ready<<endl;
    t1.join();

    
   return 0;
}