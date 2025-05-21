#ifndef _linkedlist_hpp_
#include <iostream>

class node{
public:
    int data;
    node* next;
    node* createList();
    void printList(node*);
};

#endif