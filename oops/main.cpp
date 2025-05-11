#include "oops.h"

int main(){
#if shallow_copy_
std::cout<<"Shallow Copy"<<std::endl;
    sc::shallow_copy s_obj1(5);
    sc::shallow_copy s_obj2 = s_obj1;
    s_obj2.print();
    s_obj1.print();
    std::cout<<std::endl;
#endif 

#if deep_copy_
std::cout<<"Deep Copy"<<std::endl;
    dc::deep_copy obj1(7);
    dc::deep_copy obj2 = obj1;
    obj2.print();
    obj1.print();
    std::cout<<std::endl;
#endif

    return 0;
}