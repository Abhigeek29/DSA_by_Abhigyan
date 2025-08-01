/*  This section aims to solve a leetcode question from scratch
    Q- add one to a linked list
    Steps 
        1. Make a linked list from scratch
        2. Make a reverse function for the linked list 
        3. Make a function which adds 1 to the linked list
*/
#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(){
        this->next = NULL;
    }
    Node(int data){
        this->data=data;
        this->next = NULL;
    }
};
int getlength(Node* &head);

void insertatrandom(Node*&head,Node*&tail,int data,int pos){
    // empty linked list 
    if(head == NULL){
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
    }
    //inserting at head
    else if(pos == 1){
        Node* newnode = new Node(data);
        newnode->next = head;
        head = newnode;
    }
    else if (pos>=getlength(head)){
        Node* newnode = new Node(data);
        tail->next = newnode;
        tail = newnode;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        while(pos!=1){
            prev = curr;
            curr = curr->next;
            pos--;
        }
        Node* newnode = new Node(data);
        newnode->next = curr;
        prev->next = newnode;
    }

}
int getlength(Node* &head){
    int count =0;
    if(head==NULL){
        return count;
    }
    else{
        Node* temp = head;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
    }
    return count;
}
void reverse(Node*&head){
    Node* prev = NULL;
    Node* curr = head;
    
    while(curr!=NULL){
        Node*temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    head = prev;
}
void addone(Node*&head){
    if(head==NULL){
        return ;
    }
    else{
        reverse(head);
        int carry = 1;
        Node* temp = head;
        while(temp->next!=NULL){
            int totalsum = temp->data + carry;
            int digit = totalsum%10;
            carry = totalsum/10;
            temp->data = digit;
            temp = temp->next;
            if(carry==0){
                break;
            }
        }
        if(carry!=0){
            int totalsum = temp->data+carry;
            int digit = totalsum%10;
            carry = totalsum/10;
            temp->data = digit;
            while(carry!=0){
            Node* newnode = new Node(carry);
            temp->next = newnode;  
            temp = temp->next;
            carry = 0;
            }        
        }

        reverse(head);
    }
}

void printll(Node* &head){
    if(head ==NULL){
        return;
    }
    else{
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
    }
    cout<<endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insertatrandom(head , tail , 9 , 1);
    insertatrandom(head , tail , 9 , 2);
    insertatrandom(head , tail , 9 , 3);
    // insertatrandom(head , tail , 40 , 4);
    // insertatrandom(head , tail , 50 , 5);

    printll(head);

    addone(head);
    printll(head);
    return 0;
}