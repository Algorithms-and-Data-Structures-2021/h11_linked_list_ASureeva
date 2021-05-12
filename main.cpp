#include <iostream>

struct Node {
    int data;
    Node *next;

    explicit Node(int d, Node *n = nullptr) : data{d}, next{n} {}

};


Node reverse(Node* node) {
    if (node -> next){
        Node *node1 = node -> next;
        reverse(node1);
        node1 -> next = node;
        node -> next = nullptr;
    }
    return *node;
}


int main() {
    Node *head = new Node{0};
    Node *n1 = new Node{1};
    head -> next = n1;

    Node *n2 = new Node(2);
    n1 -> next = n2;
    Node *n3 = new Node(3);
    n2 -> next = n3;
    Node *n4 = new Node(4);
    n3 -> next = n4;
    Node *n5 = new Node(5);
    n4 -> next = n5;


    std::cout << head->data << head->next->data << n1->next->data << n2->next->data << n3->next->data << n4->next->data << n5->next << std::endl;

    reverse(head);
    std::cout << n5->data << n5->next->data << n4->next->data << n3->next->data<< n2->next->data << n1->next->data << head->next;



    delete head;
    delete n1;
    delete n2;
    return 0;
}
