#include <iostream>
#include <thread>
#include <chrono>


using namespace std;

void work(){
    for(int i=0; i<10; i++)
    {
        this_thread::sleep_for(chrono::milliseconds(500)); // delay we can see thay run same time
        cout<<"Loop"<<i<<endl;
    }
}

int main(){
    thread t1(work);
    thread t2(work);

    t1.join();
    t2.join();
    
    t1.join();

/* When you wait for something happen external to your computer, execute code meenwhile --> asynchronous execution
    Distributing processing across multiple cores
*/

    return 0;
}