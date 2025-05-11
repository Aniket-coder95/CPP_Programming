#include<iostream>
#include<string>
#include<thread>
#include<mutex>

using namespace std;
static int ctr = 0;

class singleton{
private:
    string item;
    static mutex mtx;
    static singleton* instance;
    singleton(){
        ctr++;
        cout << ctr <<" instance got created" << endl;
    }
public:
    static singleton* getInstance(){
        mtx.lock(); // loc to prevent multi thread at a time
        if(instance == nullptr){
            instance = new singleton();
        }
        mtx.unlock();
        return instance;
    }

    void getItem(const string& it){
        item = it;
        cout << item << " got created." << endl;
    }
};

//defining static variables here
singleton* singleton::instance = nullptr;
mutex singleton::mtx;

void fun1(){
    singleton* s1 =  singleton::getInstance();
    s1->getItem("Car");
}

void fun2(){
    singleton* s2 = singleton::getInstance();
    s2->getItem("Bike");
}

int main(){
    thread th1(fun1);
    thread th2(fun2);

    th1.join();
    th2.join();
    return 0;
}




//To run this use
// 1->  g++ -o image main.cpp -pthread
// 2-> ./image