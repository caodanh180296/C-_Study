#include <iostream>
#include <thread>
#include <atomic>
#include <chrono>
#include <mutex>

using namespace std;

//Callable object is an object of a class that overloads the cell operator

class App
{
private: 
    int count =0;
    mutex mtx;

public:
    void operator()
    {
       for(int i=0; i< 1E6; i++)
    {
        const lock_guard<mutex> guard(mtx); // different kinds of mutex, timed mutex
        ++count;        
    }    
    }

    int getCount()
    {
        return count;
    }
}


int main()
{
    App app;
    // app();

    thread t1(ref(app)); // trick to pass reference
    thread t2(ref(app));

    t1.join();
    t2.join();
    
    cout <<app.getCount()<<end; // waiting for the thread to finish.


    return 0;
}