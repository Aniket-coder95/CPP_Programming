#include<iostream>
using namespace std;

class base{
    base() = default;
    static base ins;
    
    public:
    static base& obj(){
        return ins;
    }
    void get(){
        cout << "Im singleton class get function"<<endl;
    }
};

base base::ins;

int main(){
    base::obj().get();
}
