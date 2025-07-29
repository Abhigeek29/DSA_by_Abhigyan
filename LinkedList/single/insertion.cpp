/*
x-----x------x------x
Cases to note 
1. Always pass head by reference
2. Always check whether the linked list is empty or not 
*/
#include<iostream>
using namespace std;

class Node{
public:
    int data ;
    Node* next;

    Node(){
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
int getlength(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
// head pass by reference is must
void insertAthead(Node* &head,Node* &tail, int data){
    if(head ==NULL){
        Node* newnode = new Node(data);
        newnode->next = head;
        // kyuki single element hai isiliye same uspar point karega head and tail
        head = newnode;
        tail = newnode;
    }
    else{
        // create a node
        Node* newnode = new Node(data);
    // attach a new node to head
        newnode->next = head;
    // Update head
        head = newnode;
    }
    
}
void insertAttail(Node* &head, Node* &tail  ,int data){
    if(tail == NULL){
        // create a node
        Node* newnode = new Node(data);
        // make the node store the address of the last element
        tail->next = newnode;
        //move tail to the new last node created
        // kyuki single element hai isiliye same uspar point karega head and tail
        tail = newnode;
        head = newnode;
    }
    else{
        Node* newnode = new Node(data);
        tail->next = newnode;
        tail = newnode;
    }
}

void insertrandom(Node* &head , Node* &tail, int data , int pos){
    if(pos<=1){
        insertAthead(head , tail , data);
    }
    // else if(pos>getlength(head)){
    //     cout<<"cannot insert , invalid position"<<endl;
    // }
    // else if(pos ==1){
    //     insertAthead(head , tail , data);
    // }
    else if(pos >getlength(head)){
        insertAttail(head, tail , data);
    }
    else{
        // create a newnode
        Node* newnode = new Node(data);
        // Current and prev highlight 
        // prev ka next temp ko kardo 
        //  temp ka next curr ko kardo
        Node* prev = NULL;
        Node* curr = head;
        while(pos!=1){
            prev = curr;
            curr = curr->next;
            pos--;
        }
        prev->next = newnode;
        newnode->next = curr;
    }
}

void printll(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}

int main() {

    Node* head = NULL;
    Node* tail = NULL;
    insertAthead(head,tail , 10);
    insertAthead(head,tail , 20);
    insertAthead(head,tail , 30);
    insertAttail(head ,tail , 50);
    
    printll(head);

    insertrandom(head , tail , 1000 , 3);
    printll(head);
    insertrandom(head , tail ,  5000 , 60);
    printll(head);
    
    // Node* first = new Node(10);
    // Node* second = new Node(20);
    // Node* third = new Node(30);
    // Node* fourth = new Node(40);
    // Node* fifth = new Node(50);

    // first->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = fifth;

    // Node* head = first; // head created
    // Node* tail = fifth ; // tail created
    // cout<<"Linked list before insertion at head"<<endl;
    // printll(head);
    // insertAthead(head , tail , 5);
    // cout<<"Linked list after insertion at head"<<endl;
    // printll(head);

    // cout<<"Linked list before insertion at tail"<<endl;
    // printll(head);
    // insertAttail(head , tail , 60);
    // cout<<"Linked list after insertion at tail"<<endl;
    // printll(head);
    return 0;
}