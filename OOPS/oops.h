#ifndef _oops_
#define _oops_
#include<iostream>
#define shallow_copy_ 1
#define deep_copy_ 1

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
            int* num;
        public:
        deep_copy(int);
        deep_copy(const deep_copy&);
        void print();
        ~deep_copy();
    };
}

#endif