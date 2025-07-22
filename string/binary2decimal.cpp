#include<iostream>
#include<string.h>
using namespace std;

int main() {
    int num =0 ;
    int power = 1;
    string str;
    cin>>str;
    int len = str.length();
    for(int i = len-1 ; i>=0;i--){
        if(str[i]=='1'){
            num += power;
        }
        power = power*2;
    }
    cout<<"The decimal obtained from binary is :"<<num;
    return 0;
}