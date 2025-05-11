#include "graph.hpp"

graph* ns_graph::graph::inst = nullptr;

graph* ns_graph::graph::create_object(int nodes){
    if(inst == nullptr){
        inst = new ns_graph::graph(nodes);
        return inst;
    }
    std::cout<<"Object is already created."<<std::endl;
    std::cout<<"You can not create more than one object for a singleton class."<<std::endl;
    return nullptr;
}

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
    graph* g = ns_graph::graph::create_object(5);
    // g->create_object();
    g->add_edge(0,1);
    g->add_edge(1,2);
    g->add_edge(1,3);
    g->add_edge(3,4);
    g->add_edge(4,0);

    g->print_graph();

    graph* g1 = ns_graph::graph::create_object(1);
    return 0;
}

