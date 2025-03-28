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
        cout<< "-";
    }
}

int main() {
    thread th1(fun1, '+');
    thread th2(fun2);

    th1.join();
    th2.join();

    return 0;
}
