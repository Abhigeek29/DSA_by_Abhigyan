// Method 1 of binary to decimal 
// #include<iostream>
// #include<cmath>
// using namespace std;
// int binarytodecimal(int n){
//     int decimal = 0 ;
//     int i = 0;
//     while(n>0){
//         int bit = n%10;
//         decimal = decimal + bit*pow(2,i++);
//         n = n/10;
//     }
//     return decimal;
// }
// int main(){
//     int n ;
//     cin>>n;
//     cout<<binarytodecimal(n)<<endl;
//     return 0;
// }

// Method 2 of binary to decimal 
/* We can only use bitwise shift operator when the number is stored in binary form 
for example 10 is stored as 1010 in binary
you passing 1010 in this code means c++ interprets it as 1 thousand and 10 and instead stores its in binary form .
*/

// #include<iostream>
// #include<cmath>
// using namespace std;
// int binarytodecimal(int n){
//     int decimal = 0 ;
//     int i = 0;
//     while(n>0){
//         int bit = n%10;
//         decimal = decimal + bit*pow(2,i++);
//         n = n>>1;
//     }
//     return decimal;
// }
// int main(){
//     cout<<"Give a binary no."<<endl;
//     int n ;
//     cin>>n;
//     cout<<binarytodecimal(n)<<endl;
//     return 0;
// }