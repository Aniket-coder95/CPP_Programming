#ifndef _oops_
#include<iostream>
#include<vector>
#include<list>

namespace ns_graph{
    class graph{
        private:
           int nodes;
           std::vector<std::list<int>> adj;
        public:
           graph(int n);
           void print_graph();
           void add_edge(int u, int v);
       };
}
using namespace ns_graph;

#endif