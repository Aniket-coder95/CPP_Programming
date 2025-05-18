#include<iostream>
#include "diamond.hpp"

base::base(int x, int y){
    this->x=x;
    this->y=y;
    std::cout << "base"<<std::endl;
}

child_one::child_one():base(0,0){
    std::cout << "child_one"<<std::endl;
}
child_two::child_two():base(0,0){
    std::cout << "child_two"<<std::endl;
}
g_child::g_child(int x=0, int y=0): base(x, y), child_one(), child_two(){
    std::cout << "gchild"<<std::endl;
}

void base::get(){
    std::cout << "This is Base : " << x << " " << y << std::endl;
}

void child_one::get(){
    std::cout << "This is Child_One : " << x << " " << y << std::endl;
}

void child_two::get(){
    std::cout << "This is Child_Two : " << x << " " << y << std::endl;
}

void g_child::get(){
    std::cout << "This is g_child : " << x << " " << y << std::endl;
}

int main(){
    g_child obj(1, 2);
    obj.get();       // g_child's get
    obj.base::get(); // disambiguate if needed
    obj.child_one::get();
    obj.child_two::get();
}