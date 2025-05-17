#include "day_two.hpp"

day_two::base_one::base_one(int a=0, int b=0) : x(a), y(b){
    std::cout<<"Base_one constructor"<<std::endl;
}

day_two::base_two::base_two(int a=0, int b=0) : x(a), y(b){
    std::cout<<"Base_two constructor"<<std::endl;
}


day_two::child::child(int a1=0, int a2=0, int a3=0, int a4=0) :
base_one(a1,a2), base_two(a3,a4){
    // std::cout<<"X : "<< x << " Y : " << y <<std::endl; //getting abiguity error
}

void day_two::child::get_value(){
    // std::cout<<"X : "<< x << " Y : " << y <<std::endl; //getting abiguity error
    std::cout<<"X : "<< day_two::base_one::x << ", Y : " << day_two::base_one::y <<std::endl; //getting abiguity error
}