#ifndef logger_h
#define logger_h

#include <string>
using namespace std;

class logger{
    static int ctr;
    static logger* loggerinst;
    logger();
public:
    static logger* getLogger();
    void log(const string& msg);
    
};

#endif
