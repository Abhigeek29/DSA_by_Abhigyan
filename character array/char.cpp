// In this code it is demonstrated how a character array does not need a loop to take input and print output
// Also an example of type casting is also provided here
#include<iostream>
using namespace std;
int main(){
    char ch[10];
    cin>>ch;
    //cout<<ch;  ----> prints the whole output
    for(int i = 0 ; i<10 ; i++){
        cout<<"The value given is : "<<ch[i]<<" "<<"Present at the index: "<<i<<endl;
    }
    char temp = ch[9];
    int value = (int)temp ;
    cout<<value;
    return 0;
}