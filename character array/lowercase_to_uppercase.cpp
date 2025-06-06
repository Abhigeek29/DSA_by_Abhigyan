#include<iostream>
#include<string.h>
using namespace std ;
void Convert_Upper_case(char ch[], int size){
    int index = 0;
    while(ch[index] != '\0'){
        char currentchar = ch[index];
        if(currentchar>= 'a' && currentchar<='z'){
            ch[index] = currentchar - 'a' +'A';
        }
        index++;
    }
}
int main(){
    char ch[100];
    // cin>>ch; 
    cin.getline(ch,100);
    int length = strlen(ch);
    cout<<"Before"<<" "<<ch<<endl;
    Convert_Upper_case(ch,length);
    cout<<"After"<<" "<<ch<<endl;
    return 0;
}