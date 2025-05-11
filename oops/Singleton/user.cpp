#include <iostream>
#include "logger.hpp"

using namespace std;

int main(){
    logger *logger1 = logger::getLogger();
    logger1->log("This msg from user1");

    logger *logger2 = logger::getLogger();
    logger2->log("This msg from user2");

    return 0;
}