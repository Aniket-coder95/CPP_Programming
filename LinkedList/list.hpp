#ifndef _linkedlist_hpp_
#define _LINKEDLIST_HPP_

#include <iostream>
#include <vector>
#include <queue>

class node{
private:   
public:
    int size;
    int data;
    node* next;
    struct compare{
        bool operator()(node* a, node* b){
            return a->data > b->data;
        }
    };

    node* createList(); //creates a linkedlist
    node* reverseList(node*); //reverse the linkedlist
    void printList(node*); //print the linkedlist
    node* sortList(node*);
    node* merge(node*, node*);
    int getsize(node*);
    node* merge_k_sorted_lists(std::vector<node*>&);
};

#endif