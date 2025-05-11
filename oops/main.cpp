#include "oops.h"

int main(){
    sc::shallow_copy obj1(5);
    sc::shallow_copy obj2 = obj1;
    obj2.print();
    obj1.print();
    return 0;
}