#include<iostream>
#include<queue>
using namespace std;
class Node{
public:
    int data ;
    Node* right ;
    Node* left;

    Node(int val){
        this->data = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};
Node* insertIntoBST(Node* root, int data) {
	// single node
    if(root==nullptr){
        root = new Node(data);
        return root;
    }
    // if not single node
    if(data>root->data){
        root->right = insertIntoBST(root->right,data);
    }
    else{
        root->left = insertIntoBST(root->left,data);
    }
    return root;
}
void createBST(Node* &root) {
    int data ;
    cout<<"enter the value of the node"<<endl;
    cin>>data;
    while(data!=-1){
        root = insertIntoBST(root,data);
        cout<<"Enter data"<<endl;
        cin>>data;
    }
}
Node* minvalue(Node* root){
    if(root == nullptr){
        cout<<"No MIN value"<<endl;
        return nullptr;
    }
    Node* temp = root;
    while(temp->left!=nullptr){
        temp = temp->left;
    }
    return temp;
}
Node* maxvalue(Node* root){
    if(root == nullptr){
        cout<<"No MAX value"<<endl;
        return nullptr;
    }
    Node* temp = root;
    while(temp->right!=nullptr){
        temp = temp->right;
    }
    return temp;
}
void levelOrderTraversal(Node* root ) {
	queue<Node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()) {
		Node* temp = q.front();
		q.pop();

		if(temp == NULL) {
			cout << endl;
			if(!q.empty()) {
				q.push(NULL);
			}
		}
		else {
			cout << temp->data << " ";
			if(temp->left != NULL) {
				q.push(temp->left);
			}
			if(temp->right != NULL) {
				q.push(temp->right);
			}
		}
	}
}
void preorder(Node* root){
    if(root==nullptr){
        return ;
    }
    // pehle root process hoga
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root){
    if(root==nullptr){
        return ;
    }
    // pehle left process hoga
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(Node* root){
    if(root==nullptr){
        return ;
    }
    // pehle left and right process hoga
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
bool binarysearch(Node* root , int target){
    if(root == nullptr){
        return false;
    }
    if(root->data == target){
        return true;
    }
    bool leftans = false;
    bool rightans = false;
    if(target>root->data){
        rightans =binarysearch(root->right,target);
    }
    else{
        leftans = binarysearch(root->left,target);
    }
    return leftans || rightans ;
}
int main() {
    Node* root = NULL;
    createBST(root);
    cout<<"The level order traversal of the tree is :";
    levelOrderTraversal(root);
    cout<<endl;
    cout<<"The preorder traversal of the tree is :";
    preorder(root);
    cout<<endl;
    cout<<"The inorder traversal of the tree is :";
    inorder(root);
    cout<<endl;
    cout<<"The postorder traversal of the tree is :";
    postorder(root);
    cout<<endl;
    cout<<"The minimum value of the tree is :";
    Node* mini = minvalue(root);
    cout<<mini->data<<" "<<endl;
    cout<<endl;
    cout<<"The maximum value of the tree is :";
    Node* maxi = maxvalue(root);
    cout<<maxi->data<<" ";
    cout<<endl;

    int target ;
    cout<<"enter the target you want to find" <<endl;
    cin>>target;
    while(target!=-1){
        bool ans = binarysearch(root,target);
        if(ans==true){
            cout<<"Found"<<endl;
        }
        else{
            cout<<"Not Found"<<endl;
        }
        cout<<"enter the target you want to find" <<endl;
        cin>>target;
    }
    cout<<"All operations done "<<endl;
    return 0;
}