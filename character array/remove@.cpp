#include <iostream>
#include<string.h>
using namespace std;
void remove_(char ch[] , int size){
    int index = 0;
    while(ch[index] !='\0'){
        if(ch[index] == '@'){
            ch[index] = ' ';
        }
        index++;
    }
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    cout<<"Before"<<" "<<ch<<endl;
    remove_(ch,100);
    cout<<"After"<<" "<<ch<<endl;
    return 0;
}
