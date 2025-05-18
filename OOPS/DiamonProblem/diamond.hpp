#ifndef _diamond_prob_
#include <iostream>

class base{
    public:
    int x;
    int y;
    base(int , int);
    void get();
};

class child_one : virtual public base{ // *1
    public:
    child_one();
    void get();
};

class child_two : virtual public base{ // *1
    public:
    child_two();
    void get();
};

class g_child : public child_one, public child_two{
    public:
    g_child(int,int);
    void get();
};

#endif

// *1
// If virtual inheritance is not used, g_child would inherit two copies of base, 
// one through child_one, and one through child_two — leading to ambiguity and redundancy.

