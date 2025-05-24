#ifndef _linkedlist_hpp_
#include <iostream>

class node{
public:
    int size;
    int data;
    node* next;

    node* createList(); //creates a linkedlist
    node* reverseList(node*); //reverse the linkedlist
    void printList(node*); //print the linkedlist
    node* sortList(node*);
    node* merge(node*, node*);
    int getsize(node*);
};

#endif