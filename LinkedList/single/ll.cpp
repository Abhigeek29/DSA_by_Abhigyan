#include<iostream>
using namespace std;

class Node{
public:
    int data ;
    Node* next ;
    Node(){
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void printll(Node* head){
    int node = 0;
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<"->";
        node++;
        temp = temp->next ;
    }
    cout<<endl;
    cout<<"The length of linked list is "<<node<<endl;
}
int main() {
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    Node* head = first; // head pointer created 
    printll(head);
    return 0;
}