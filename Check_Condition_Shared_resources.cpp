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
        cout << "t1 acquiring lock"<<endl;
        unique_lock<mutex> lock(mtx); // both of unique lock needs to use same mutex
        cout << "t1 acquired lock"<<endl;
        ready = true;
        lock.unlock();
        cout << "t1 released lock; notifying"<<endl;
        condition.notify_one();
    });
    cout << "main threads acquiring lock"<<endl;
    unique_lock<mutex> lock(mtx); // both of unique lock needs to use same mutex
    cout << "main threads acquired lock; waiting"<<endl;
    condition.wait(lock, [&](){ return ready; });

    cout<<"main thread finished waiting"<<endl;
    cout<<"ready "<<ready<<endl;
    t1.join();

    
   return 0;
}