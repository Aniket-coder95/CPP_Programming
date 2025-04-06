#include<iostream>

// int fun(int num){
//     if(num%2 == 1) return 1;
//     return 0;
// }

int main(){
    int num;
    std::cout << "enter your number here : ";
    std::cin >> num; 

    auto lambda1 = [&](){
            if(num%2 == 1) return true;
            return false;
    };
    
    //if(fun(num)){
    if(lambda1()){
        std::cout << "Its Odd"<<std::endl;
    }else{
        std::cout << "Its Even"<<std::endl;
    }
    return 0;
}