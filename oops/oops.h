#ifndef _oops_
#define _oops_
#include<iostream>
#define copy_constructor 1

namespace sc{
    class shallow_copy{
        private:
            int* number;
        public:
            shallow_copy(int num);
            void print();
    };
}


namespace dc{
    class deep_copy{
        private:
            int number;
        public:
        deep_copy(int num);
            void print();
    };
}

#endif