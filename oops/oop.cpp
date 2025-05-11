#include "oops.hpp"

ns_graph::graph::graph(int n=0) : nodes(n){
    adj.resize(nodes);
}

void ns_graph::graph::print_graph(){
    if(nodes == 0) return;
    for(int i=0 ; i<nodes ; i++){
        std::cout<< "for " << i <<" :"<< std::endl;
        for(auto x : adj[i]){
            std::cout<< x << " ";
        }
        std::cout<<"\n"<<std::endl;
    }
}

void ns_graph::graph::add_edge(int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main(){
    graph g(5);
    g.add_edge(0,1);
    g.add_edge(1,2);
    g.add_edge(1,3);
    g.add_edge(3,4);
    g.add_edge(4,0);

    g.print_graph();
    return 0;
}

