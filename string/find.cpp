#include<iostream>
using namespace std;
int main(){
    string str1 = "Yo yo my boy";
    string st2 = " boy";
    if(str1.find(st2)== string :: npos){
        cout<<"Not found"<<endl;
    }
    else{
        cout<<"found";
    }
    return 0;
}