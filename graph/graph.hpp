#ifndef _oops_
#include<iostream>
#include<vector>
#include<list>

namespace ns_graph{
    class graph{
        private:
           int nodes;
           static graph* inst;
           std::vector<std::list<int>> adj;
           graph(int n);
        public:
           void print_graph();
           void add_edge(int u, int v);
           static graph* create_object(int nodes);
       };
}
using namespace ns_graph;

#endif