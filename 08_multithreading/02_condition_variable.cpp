#include <iostream>
#include <string>
#include <thread>
#include <mutex>
#include <condition_variable>

using namespace std;
  

// What is condition_variable in C++?

std::mutex m;
bool is_ready = false;
condition_variable cond_var;

void func1() {
    std::unique_lock<std::mutex> lock(m);
    cout << "Function1" << endl;
    is_ready = true;
    cond_var.notify_one();
}

void func2() {
    std::unique_lock<std::mutex> lock(m);
    cond_var.wait(lock, []{ return is_ready;});
    cout << "Function2" << endl;
}

int main()
{
    std::thread worker2(func2);
    std::thread worker1(func1);
    worker1.join();
    worker2.join();
    
    
}
