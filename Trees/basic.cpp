// Implementation of tree 
#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* left ;
    Node* right ;

    Node(int val){
        this->data= val;
        this->left = nullptr;
        this->right = nullptr;
    }
};
Node* createnode(){
    int data;
    cout<<"Enter a value to insert"<<endl;
    cin>>data;
    if(data ==-1){
        return nullptr;
    }
    Node* root = new Node(data);
    // left subtree recursion
    cout<<"left of node "<<root->data<<endl;
    root->left = createnode();
    // right subtree recursion
    cout<<"right of node "<<root->data<<endl;
    root->left = createnode();
    return root;
}
int main() {
    Node* root = createnode();

    return 0;
}