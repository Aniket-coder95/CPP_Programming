#include <iostream>
#include <thread>

using namespace std;

void fun1(char symbol){
    for(int i=0 ; i<=200 ; i++){
        cout<< symbol;
    }
}

void fun2(){
    for(int i=0 ; i<=200 ; i++){
        cout<< "1";   // means thread 2 in output
    }
}

int main() {
    thread th1(fun1, '0'); // 0 means thread 1
    //th1.join();
    th1.detach();

    thread th2(fun2);
    th2.join();
    //th1.join();  //invalid argument run time error
    return 0;
}
