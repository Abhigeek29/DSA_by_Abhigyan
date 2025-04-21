//  IMPORTANT : - BELOW  ARE THE TWO METHODS ( NOT SO DIFFERENT FROM EACH OTHER JUST WITH MILD TWEAKING)
// 


// Reversing a digit  using cout 
// #include<iostream>
// using namespace std ;
// void reverse_number(int &number){
//     cout<<"The number after reversing is : ";
//     while(number!=0){
//         int last_digit = number%10;
//         cout<<last_digit;
//         number/=10;
//     }
// }
// int main(){
//     int number ;
//     cin>>number;
//     cout<<"The number before reversing is : "<<number<<endl;
//     reverse_number(number);
//     return 0 ;
// }

// Reversing a digit without using cout
#include<iostream>
using namespace std ;
int reverse_number(int &number){
    int new_num=0;
    while(number!=0){
        int last_digit = number%10;
        new_num = new_num*10 + last_digit;
        number/=10;
    }
    return new_num;
}
int main(){
    int number ;
    cin>>number;
    cout<<"The number before reversing is : "<<number<<endl;
    int number_reversed = reverse_number(number);
    cout<<"The number after reversing is : "<<number_reversed<<endl;
    return 0 ;
}