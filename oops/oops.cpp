#include "oops.h"


sc::shallow_copy::shallow_copy(int num = 1) : number(new int(num)){}

void sc::shallow_copy::print(){
    std::cout<<"number: " << *number << " add: " <<number <<std::endl;
}