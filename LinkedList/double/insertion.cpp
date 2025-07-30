#include<iostream>
using namespace std;
class Node{
public:
    int data ;
    Node* prev;
    Node* next;

    Node(){
        this->next = NULL;
        this->prev = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
int getlength(Node* &head){
    int count = 0;
    Node* temp = head;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
void insertathead(Node*&head,Node*&tail,int data){
    if(head==NULL){
        Node*newnode = new Node(data);
        head = newnode;
        tail = newnode;
    }
    else{
        Node* newnode = new Node(data);
        head->prev = newnode;  // back connection
        newnode->next = head ; // front connection
        head = newnode;
    }
}
void insertattail(Node*&head , Node*&tail , int data){
    if(head==NULL){
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
    }
    else{
        Node* newnode = new Node(data);
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}
void insertatrandom(Node* &head , Node*&tail , int data , int pos){
    if(pos<=1){
        insertathead(head,tail,data);
    }
    else if(pos>= getlength(head)){
        insertattail(head,tail,data);
    }
    else{
        Node* prevnode = NULL;
        Node* currnode = head;
        while(pos!=1){
            prevnode = currnode;
            currnode = currnode->next;
            pos--;
        }
        Node* newnode = new Node(data); //create the node to be inserted
        // connection with previous node
        newnode->prev = prevnode;
        prevnode->next = newnode ;
        newnode->next = currnode;
        currnode->prev = newnode;
    }
}
void deleteathead(Node*&head){
    if(head==NULL){
        cout<<"Linked is empty , nothing to delete"<<endl;
        return ;
    }
    else{
        Node*temp = head;
        head = head->next; // isolate kardiya
        temp->next = NULL;
        head->prev = NULL;
        delete temp;
    }
}
void deleteattail(Node*tail ){
    if(tail==NULL){
        cout<<"Linked is empty , nothing to delete"<<endl;
        return;
    }
    else{
        Node*temp = tail;
        tail= tail->prev;
        temp->prev = NULL;
        tail->next = NULL;
        delete temp;
    }
}
void deletion(Node*&head, Node*&tail, int pos){
    if(head == NULL){
        cout<<"Cannot delete cause linked list is empty"<<endl;
        return;
    }
    else if(head == NULL){
        Node* temp = head;
        delete temp;
        head= NULL;
        tail = NULL;
    }
    else if(pos==1){
        deleteathead(head);
    }
    else if(pos==getlength(head)){
        deleteattail(tail);
    }
    else{
        // random deletion
        Node* prevnode = NULL;
        Node* currnode = head;
        while(pos!=1){
            prevnode = currnode;
            currnode = currnode->next;
            pos--;
        }
        // curr ko jis element ko delete karna hai usse ek aagey pohochana hai bass
        Node* temp = currnode;
        currnode = currnode->next;
        prevnode->next= currnode;
        currnode->prev = prevnode;
        temp->prev = NULL;
        temp->next = NULL ;
        delete temp;        
    }
}
void printdll(Node* &head){
    if(head==NULL){
        cout<<"Nothing to print"<<endl;
    }
    else{
        Node*temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<endl;
    }
}
int main() {
    Node* head = NULL;
    Node* tail = NULL;
    insertathead(head , tail , 20);
    insertattail(head , tail , 30);
    insertattail(head , tail , 40);
    insertattail(head , tail , 50);
    insertattail(head , tail , 60);
    insertathead(head , tail , 10);

    printdll(head);

    insertatrandom(head , tail , 45 , 5);
    printdll(head);

    deletion(head , tail ,3 );
    printdll(head);
    return 0;
}