// Implementation of tree 
// Below is the input tree
// 10 20 40 80 -1 -1 -1 50 90 -1 -1 -1 30 60 -1 -1 70 -1 -1
#include<iostream>
#include<queue>
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
    root->right = createnode();
    return root;
}
// traversals
void preorder(Node* root){
    if(root ==nullptr){
        return ;
    }
    // root ko process
    cout<<root->data<<" ";
    // left part ko karo
    preorder(root->left);
    // right part ko process karo
    preorder(root->right);
}
void inorder(Node* root){
    if(root ==nullptr){
        return;
    }
    // left ko process karo
    inorder(root->left);

    cout<<root->data<<" ";

    inorder(root->right);
}
void postorder(Node* root){
    if(root ==nullptr){
        return;
    }
    // left ko process karo
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}

void levelorder(Node* root){
    queue<Node*>q;
    // initial state
    q.push(root);
    // traversal
    /* Initial state push karlenge 
    phir uske left and right child push kardenge 
    phir left ke children push kardenge 
    phir right ke 
    similary 
    */
    while(!q.empty()){
        Node* front = q.front();
        q.pop();
        cout<<front->data<<" ";

        if(front->left!=nullptr){
            q.push(front->left);
        }
        if(front->right!=nullptr){
            q.push(front->right);
        }
    }
}
void levelorderprint(Node*root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    // initial state banadi 
    // ab levelwise print karega
    int level = 0 ;
    cout<<"level  "<<level<<": ";
    while(q.size()>1){
        Node*front = q.front();
        q.pop();
        if(front==NULL){
            cout<<endl;
            level++;  // move to next level
            cout << "Level " << level << ": ";
            q.push(NULL);
        }
        else{
            // valid case
            cout<<front->data<<" ";
            if(front->left!=nullptr){
                q.push(front->left);
            }
            if(front->right!= nullptr){
                q.push(front->right);
            }
        }
    }
}
int main() {
    Node* root = createnode();
    cout<<"The preorder traversal is "<<endl;
    preorder(root);
    cout<<endl;
    cout<<"The inorder traversal is "<<endl;
    inorder(root);
    cout<<endl;
    cout<<"The postorder traversal is "<<endl;
    postorder(root);
    cout<<endl;
    cout<<"The levelorder traversal is "<<endl;
    levelorder(root);
    cout<<endl;
    cout<<"The level wise levelorder traversal is "<<endl;
    levelorderprint(root);
    cout<<endl;
    return 0;
}