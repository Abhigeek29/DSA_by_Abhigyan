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
#include<vector>
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

// int sumofn(int n){
//     if(n==1){
//         return 1;
//     }
//     int ans = n + sumofn(n-1);
//     return ans;
// }

// void printarray(int arr[], int size){
//     if(size==0){
//         return ;
//     }
//     cout<<*arr<<" ";
//     printarray(arr+1 , size-1);
// }

// void storevector(int arr[], int size, int index , vector<int>&ans ){
//     if(index>=size){
//         return ;
//     }
//     if(arr[index]%2 ==0){
//         ans.push_back(arr[index]);
//     }
//     storevector(arr ,size, index+1,ans); 
// }

// void printdigits(int n , vector<int>&ans ){
//     if(n==0){
//         return ;
//     }
//     int digit = n%10;
//     n = n/10;
//     printdigits(n, ans);
//     ans.push_back(digit);
// }

void printnum(vector<int> &ans,int size, int index){
    if(index>=size){
        return ;
    }
    int digit = ans[index];
    int num = num + digit*10;
    printnum(ans , size,index+1);
    cout<< num;
}
int main() {
    // int arr[5] = {1,2,3,4,5};
    // int size = 5;
    // // printarray(arr,size);
    // int index = 0;
    // vector<int>ans;
    // storevector(arr,size,index,ans);

    // for(int it : ans){
    //     cout<<it<<" ";
    // }
    // int n = 4215;
    // vector<int>ans;
    // printdigits(n,ans);
    // for(int it : ans){
    //     cout<<it<<" ";
    // }

    vector<int>ans{1,2,3};
    int index = 0;
    int size = ans.size();
    printnum(ans,size,index);
    return 0;
}