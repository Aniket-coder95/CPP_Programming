#include "oops.h"
#include "day_one.hpp"
#include "day_two.hpp"

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

#if day_one_var
    std::cout<<"DAY_ONE"<<std::endl;
    dayone::day_one d1(7);
    d1.updatevector();
    d1.print_vector();
    dayone::day_one::static_mem_fun();
    std::cout<<std::endl;
#endif

#if day_two_var
    std::cout<<"DAY_TWO"<<std::endl;
    day_two::base_one b1(1,2);
    day_two::base_two b2(3,4);
    day_two::child c(5,6,7,8);
    c.get_value();
#endif

    return 0;
}