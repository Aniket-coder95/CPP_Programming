#ifndef _day_one_
#include <iostream>
#include <vector>

#define day_one_var 1

namespace dayone{
    class day_one{
        private:
          static inline int tmp = 7;
          int size;
          std::vector<int> vec;
        public:
          day_one(int);
          void updatevector();
          void print_vector();
          static void static_mem_fun();
      };
};

#endif