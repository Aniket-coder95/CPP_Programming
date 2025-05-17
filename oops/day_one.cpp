#include "day_one.hpp"

dayone::day_one::day_one(int s) : size(s){
}

void dayone::day_one::updatevector(){
    for(int i=0 ; i<size ; i++){
        vec.push_back(std::rand()%99);
    }
}

void dayone::day_one::print_vector(){
    for(auto& x  : vec){
        std::cout<<x<<" ";
    }
    std::cout<<std::endl;
}

void dayone::day_one::static_mem_fun(){
    std::cout<<"static member function can acces only static data member."<<std::endl;
    std::cout<<"For Exp - tmp : "<< tmp <<std::endl;
}

