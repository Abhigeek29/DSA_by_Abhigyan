#include<iostream>
using namespace std;
int fastexpo(int a , int b){
    int ans = 1;
    while(b>0){
        if(b&1){
            ans = ans * a;
        }
        a = a*a;
        b>>=1;
    }
    return ans ;
}
int main() {
    int a , b;
    cin>>a>>b;
    int expo = fastexpo(a,b);
    cout<<expo;
    return 0;
}