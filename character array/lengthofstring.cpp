#include<iostream>
using namespace std ;
int find_length(char ch[] , int size){
    int count = 0;
    for (int i = 0 ; i<size;i++){
        if(ch[i] == '\0'){
            break;
        }
        else if (ch[i]==' '){
            count = count ;
        }
        else{
            count++;
        }
    }
    return count;
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    int length = find_length(ch,100);
    cout<<"The length of the string is : "<<length<<endl;
    return 0;
}