// #include<iostream>
// using namespace std;
// // const iis
// int factorial(int x){
//     int ans=1;
//     if(x==0 || x==1){
//         return 1;
//     }else{
//         return x*factorial(x-1);
//     }
    
// }
// int main() {
//     int x ;
//     cin>>x;
//     int result = factorial(x);
//     cout<<result<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;
// void print(int n){
//     if(n ==1){
//         cout<<1<<" ";
//         return;
//     }
//     print(n-1);
//     cout<<n<<" ";
// }
// int pow(int x){
//     if(x==0){
//         return 1;
//     }
//     int ans = 2*pow(x-1);
//     return ans;
// }

// int fibonacci(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     int ans = fibonacci(n-1)+fibonacci(n-2);
//     return ans;
// }

int sumofn(int n){
    if(n==1){
        return 1;
    }
    int ans = n + sumofn(n-1);
    return ans;
}
int main() {
    int n ;
    cin >>n ;
    cout<<sumofn(n);
    return 0;
}