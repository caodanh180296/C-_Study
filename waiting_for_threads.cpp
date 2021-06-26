#include <iostream>
#include <cmath>
#include <iomanip> // to set precision
#include <thread>
#include <chrono>
#include <future>
#include <exception>


using namespace std;

int main()
{
    atomic<bool> ready = false; // use atomic to well define between different threads
    thread t1([&](){
        this_thread::sleep_for(chrono::milliseconds(2000));
        ready = true;
    });
    t1.join();

    while(!ready)
    {
        this_thread::sleep_for(chrono::milliseconds(100));
    }

    cout<<"ready "<<ready<<endl;


    
   return 0;
}