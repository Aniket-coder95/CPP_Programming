#include "list.hpp"

node* node::createList(){
    int n;
    std::cout << "\nenter no of nodes : ";
    std::cin >> n;
    if (n <= 0) return nullptr;
    if(n) node::size=n;

    node* head = nullptr;
    node* tail = nullptr;

    for(int i=0 ; i<n ;i++){
        node* curr = new node;
        std::cout<<"enter node-"<<i+1<<" value :";
        std::cin >> curr->data;
        curr->next = nullptr;
        // h->next = curr;
        // h=curr;
        if(!head){
            head = tail = curr;
        }else{
            tail->next = curr;
            tail = curr;
        }
    }
    return head;
}

int node::getsize(node* head){
    int count = 0;
    while(head != nullptr){
        count++;
        head = head->next;
    }
    return count;
}

node* node::merge(node* left, node* right){
    if(!left) return right;
    if(!right) return left;

    if(left->data < right->data){
         left->next = merge(left->next, right);
         return left;
    }else {
        right->next =  merge(left,right->next);
        return right;
    }
    //*****take more time but works perfectly*****
    // node head;
    // node* tail = &head;

    // while(left && right){
    //     if(left->data > right->data){
    //         tail->next = right;
    //         right=right->next;
    //     }else if(left->data <= right->data){
    //         tail->next = left;
    //         left = left->next;
    //     }
    //     tail = tail->next;
    // }
    // tail->next = left ? left : right;
    // return head.next;
}

node* node::sortList(node* head){
    // std::cout<<"\nSorting the list :" <<std::endl;
    if(head == nullptr || head->next == nullptr) return head;
    node* curr = head;
    node* prev = nullptr;
    node* tail = head;
    while(tail && tail->next){
        prev = curr;
        curr = curr->next;
        tail = tail->next->next;
    }
    // std::cout<<"prev : "<<prev->data <<std::endl;
    // std::cout<<"curr : "<<curr->data <<std::endl;
    // std::cout<<"head : "<<head->data <<std::endl;
    if (prev) prev->next = nullptr;

    node* left = node::sortList(head);
    node* right = node::sortList(curr);

    return merge(left, right);
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