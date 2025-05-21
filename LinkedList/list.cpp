#include "list.hpp"

node* node::createList(){
    int n;
    std::cout << "enter no of nodes : ";
    std::cin >> n;

    node* head = new node;
    node* h = head;
    for(int i=0 ; i<n ;i++){
        node* curr = new node;
        std::cout<<"enter "<<i<<"th node value :";
        std::cin >> curr->data;
        curr->next = nullptr;
        h->next = curr;
        h=curr;
    }
    return head->next;
}

node* node::reverseList(node* head){
    node* curr = head;
    node* prev = nullptr;
    node* next;
    while(curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void node::printList(node* head){
    while(head){
        std::cout << head->data<<"->";
        head = head->next;
    }
    std::cout<<"Null"<<std::endl;
}