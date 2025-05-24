#include "list.hpp"

int main(){
    node n;

    node* head1 = n.createList();
    node* head2 = n.createList();

    n.printList(head1);
    n.printList(head2);

    node* s1_head = n.sortList(head1);
    node* s2_head = n.sortList(head2);

    std::cout<<"\nSorted 1st List is :" <<std::endl;
    n.printList(s1_head);
    std::cout<<"Sorted 2nd List is :" <<std::endl;
    n.printList(s2_head);

    std::cout<<"\nAfter merging two sorted List (1,2) the list is :" <<std::endl;
    node* head3 = n.merge(s1_head, s2_head);
    n.printList(head3);

    node* rhead = n.reverseList(head3);
    std::cout<<"\nReversed 1st List is :" <<std::endl;
    n.printList(rhead);

    // std::cout<<"size of the list is : "<< n.getsize(head1) <<std::endl;
    // node* head2 = n.createList();
    // std::cout<<"The 2nd List is :" <<std::endl;
    // n.printList(head2);

    return 0;
}