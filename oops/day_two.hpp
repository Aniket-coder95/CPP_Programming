// NOTE:
// Constants and Reference are not usefull in constructors as a parameter
// coz have to handle the memory dynamically.
// exp: int& r = *(new int(o));

// No contribution of static data member in size of a class

#ifndef _DayTwo_
#include <iostream>

#define day_two_var 1

namespace day_two{
    class base_one{
        private:
        public:
            int x;
            int y;
            base_one(int, int);
    };

    class base_two{
        private:
        public:
            int x;
            int y;
            base_two(int, int);
    };

    class child : public base_one, public base_two{
        private:
        public:
            child(int, int,int,int);
            void get_value();
    };
};

using namespace day_two;

#endif

