//Implementation of trienode 
/* pros --> if there exists any data structure other than tries 
    then it would have taken below amount of boxes to store the words
    love : 4
    lover : 5
    lov : 3
    loved : 5 
    total = 5 + 5+ 3+4 --> 17 

    trie takes only 5 since love , lov , lover , loved are stored in the same multi way tree
*/ 
#include<iostream>
#include<string.h>
using namespace std;
class Trienode{
public:
    char value;
    Trienode* children[26];
    bool isTerminal ;

    Trienode(char val){
        this->value = val;
        //initialised all the children
        for(int i = 0 ; i<26 ;i++){
            children[i] = NULL; 
        }
        this->isTerminal = false;
    }
};
void insertNode(Trienode* root, string word){
    //base case 
    if(word.length()==0){
        root->isTerminal = true;
        return;
    }
    char ch = word[0];
    int index = ch-'a';
    Trienode* child ; // to maintain the children of a respective node 
    //if present 
    if(root->children[index]!=NULL){
        child = root->children[index];
    }
    else{
        // absent case , we create and traverse
        child = new Trienode(ch);
        root->children[index] = child;
    }

    //recursion 
    insertNode(child,word.substr(1));


}

bool searching(Trienode* root , string word){
    //base case 
    if(word.length()==0){
        return root->isTerminal;
    }
    char ch = word[0];
    int index = ch-'a';
    Trienode* child ;
    // 1 case searching 
    if(root->children[index]!=NULL){
        // present 
        child = root->children[index];
    } 
    else{
        // not found 
        return false;
    }

    // recursion ka ans
    bool recans = searching(child,word.substr(1));
    return recans;
}
void deletion(Trienode* root , string word){
    // for deletion simply go to the created node 
    if(!searching(root,word)){
        // that means word is not present 
        cout<<"the word you want to delete is not present in the string"<<endl;
    }
    else{
        // deletion
        if(word.length()==0){
            root->isTerminal = false;
            cout<<"The word/string is deleted from the trie"<<endl;
            return ;
        }
        char ch = word[0];
        int index = ch-'a';
        Trienode* child = root->children[index];
        deletion(child,word.substr(1));
    }
}
int main() {
    Trienode* root = new Trienode('_');
    insertNode(root,"cater");
    insertNode(root,"care");
    insertNode(root,"com");
    insertNode(root,"cat");
    insertNode(root,"lover");
    insertNode(root,"load");
    insertNode(root,"bat");
    insertNode(root,"car");
    insertNode(root,"lov");

    cout << "Insertion is done " << endl;

    int key = 0;   // start with something other than -1
    string word;

    while (true) {
        cout << "Now please enter the string you want to search (or type -1 to exit): ";
        cin >> word;

        // check if user typed -1 instead of a word
        if (word == "-1") break;

        if (searching(root, word)) {
            cout << "Yes, the word is present" << endl;
        } else {
            cout << "Sorry, the word is not present" << endl;
        }
        cout << endl;
    }
    
    string del_word;
    cout << "Enter the word you want to delete: ";
    cin >> del_word;

    // try to delete
    deletion(root, del_word);

    // confirm by searching
    if (!searching(root, del_word)) {
        cout << "Confirmation: the word \"" << del_word << "\" was deleted." << endl;
    } else {
        cout << "The word \"" << del_word << "\" still exists in the trie." << endl;
    }    
    return 0;
}