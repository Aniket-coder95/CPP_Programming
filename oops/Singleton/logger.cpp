#include <iostream>
#include "logger.hpp"

using namespace std;
int logger::ctr = 0;
logger* logger::loggerinst = nullptr;

logger::logger(){
    ctr++;
    cout << "new instance created, no of instances " << ctr << endl;
}

void logger::log(const string& msg){
    cout << msg << endl;
}

logger* logger::getLogger(){
    if(loggerinst == nullptr){
        loggerinst = new logger();
    }
    return loggerinst;
}