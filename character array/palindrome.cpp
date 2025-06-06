#include<iostream>
using namespace std;
bool valid_palindrome(char ch[],int size){
    int i = 0;
    int j = size-1;
    while(i<=j){
        if(ch[i]==ch[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}
int get_length(char ch[],int size){
    int index = 0;
    while(ch[index]!='\0'){
        index++;
    }
    return index;
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    int length = get_length(ch,100);
    bool palindrome = valid_palindrome(ch,length);
    if(palindrome){
        cout<<"Yes it is a valid Palindrome"<<endl;
    }
    else{
        cout<<"No not a valid Palindrome"<<endl;
    }
    return 0;
}