// Implementation of tree 
// Below is the input tree
// 10 20 40 80 -1 -1 -1 50 90 -1 -1 -1 30 60 -1 -1 70 -1 -1
#include<iostream>
#include<queue>
#include<map>
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
void createmap(int inorder[],int size, map<int,int>&valuetoindex){
    // optimisation
    for(int i = 0 ; i<size;i++){
        int element = inorder[i];
        int index = i;
        valuetoindex[element] = index;
    }
}
int search(int inorder[], int size , int target ){
    for(int i = 0 ; i<size;i++){
        if(target==inorder[i]){
            return i;
        }
    }
    return -1 ; // this will never happen
}
Node* createtraversal(int preorder[] , int inorder[], int &preindex , int instart , int inend,int size,map<int,int>&valuetoindex){
    // always pass preorder index by reference 
    // base case 
    if(preindex>=size || instart>inend){
        return nullptr;
    }

    // 1 case solving 
    // preorder se element uthakar uski node banado
    int element = preorder[preindex];
    preindex++;
    Node* root = new Node(element);

    // ab iss element ko inorder mai dundhna hai 
    // int position = search(inorder,size , element);
    int position = valuetoindex[element];

    // rest recursion will handle 
    root->left = createtraversal(preorder,inorder,preindex,instart,position-1,size,valuetoindex);
    root->right = createtraversal(preorder,inorder,preindex,position+1 , inend , size,valuetoindex);

    return root;
}
int main() {
    int preorder[] = {2,8,10,6,4,12};
    int inorder[] = {10,8,6,2,4,12};
    int size = 6;
    int preindex = 0;
    int instart = 0;
    int inend = 5;
    map<int,int> valuetoindex;
    createmap(inorder,size,valuetoindex);
    Node* root = createtraversal(preorder,inorder , preindex ,instart,inend,size,valuetoindex);
    cout<<"The level wise levelorder traversal is "<<endl;
    levelorderprint(root);
    cout<<endl;
    // Node* root = createnode();
    // cout<<"The preorder traversal is "<<endl;
    // preorder(root);
    // cout<<endl;
    // cout<<"The inorder traversal is "<<endl;
    // inorder(root);
    // cout<<endl;
    // cout<<"The postorder traversal is "<<endl;
    // postorder(root);
    // cout<<endl;
    // cout<<"The levelorder traversal is "<<endl;
    // levelorder(root);
    // cout<<endl;
    // cout<<"The level wise levelorder traversal is "<<endl;
    // levelorderprint(root);
    // cout<<endl;

    return 0;
}