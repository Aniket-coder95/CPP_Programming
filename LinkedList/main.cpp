#include "list.hpp"

int main(){
    node n;

    node* head1 = n.createList();
    node* head2 = n.createList();

    std::cout<<"\n\nSize of 1st list is : "<< n.getsize(head1) <<" ";
    std::cout<<"& 2nd list is : "<< n.getsize(head2) << " and the lists are: "<<std::endl;
    n.printList(head1);
    n.printList(head2);

    node* s1_head = n.sortList(head1);
    node* s2_head = n.sortList(head2);

    std::cout<<"\nSorted 1st List is : ";
    n.printList(s1_head);
    std::cout<<"Sorted 2nd List is : ";
    n.printList(s2_head);

    std::cout<<"\nAfter merging two sorted List (1,2) the list is :" <<std::endl;
    node* head3 = n.merge(s1_head, s2_head);
    n.printList(head3);

    node* rhead = n.reverseList(head3);
    std::cout<<"\nReversed 1st List is : " <<std::endl;
    n.printList(rhead);


    std::cout<<"lets create k sorted list"<<std::endl;
    node* head4 = n.createList();
    node* head5 = n.createList();
    node* head6 = n.createList();
    node* head7 = n.createList();

    node* sorted_head1 = n.sortList(head4);
    node* sorted_head2 = n.sortList(head5);
    node* sorted_head3 = n.sortList(head6);
    node* sorted_head4 = n.sortList(head7);

    std::vector<node*> lists;
    lists.push_back(sorted_head1);
    lists.push_back(sorted_head2);
    lists.push_back(sorted_head3);
    lists.push_back(sorted_head4);

    node* mksl = n.merge_k_sorted_lists(lists);
    n.printList(mksl);

    return 0;
}