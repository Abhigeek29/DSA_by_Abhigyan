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
int main() {
    Node* root = NULL;
    createBST(root);
    cout<<"The level order traversal of the tree is :"<<endl;
    levelOrderTraversal(root);
    cout<<endl;
    return 0;
}