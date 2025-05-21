#include "list.hpp"

int main(){
    node n;
    node* head1 = n.createList();
    
    std::cout<<"\nThe 1st List is :" <<std::endl;
    n.printList(head1);
    node* rhead = n.reverseList(head1);
    n.printList(rhead);

    // node* head2 = n.createList();
    // std::cout<<"The 2nd List is :" <<std::endl;
    // n.printList(head2);

    return 0;
}