
#include <iostream>
#include <vector>
using namespace std ;


class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};


class Solution {
  public:
    vector<int> inOrder(Node* root) {
        // code here
        vector<int> inorder;
        Node* curr = root;
        while(curr!=nullptr){
            // left is null wala case 
            if(curr->left==nullptr){
                // print kardo inorder 
                inorder.push_back(curr->data);
                // usko right jane ka order dedo 
                curr = curr->right;
            }
            else{
                // left null nhi hai toh tab tak jate jana hai jab tak 
                // left subtree ka rightmost ko root se connect na karde
                Node* prev = curr->left;
                while(prev->right!=nullptr && prev->right!=curr){
                    prev = prev->right;
                }
                if(prev->right == nullptr){
                    // link banado 
                    prev->right = curr;
                    curr = curr->left;
                }
                else{
                    // answer mai add karo 
                    prev->right = nullptr;
                    inorder.push_back(curr->data);
                    curr = curr->right;
                }
            }
        }
        return inorder;
    }
};


int main(){
    return 0;
}
