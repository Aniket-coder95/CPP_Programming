#include <iostream>
#include <thread>
#include <mutex>

using namespace std;
std::mutex mtx;
int cntr = 0;

void fun(){
    mtx.lock(); //if will not use loc numbers will print rndomly as both threads running parallely
    for(int i=0 ; i<=200 ; i++){
        cout<< ++cntr <<" ";
    }
    mtx.unlock();
}

int main() {
    thread th1(fun);
    thread th2(fun);

    th1.join();
    th2.join();

    return 0;
}
