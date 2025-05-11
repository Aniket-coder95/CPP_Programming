#include "oops.h"


sc::shallow_copy::shallow_copy(int num = 1) : number(new int(num)){}

void sc::shallow_copy::print(){
    std::cout<<"number: " << *number << " add: " <<number <<std::endl;
}


dc::deep_copy::deep_copy(int num = 1){
    this->num = new int(num);
}

void dc::deep_copy::print(){
    std::cout<<"number: " << *num << " address: " <<num <<std::endl;
}

dc::deep_copy::deep_copy(const deep_copy& old){
    num = new int(*old.num);
}

dc::deep_copy::~deep_copy() {
    delete num;
}