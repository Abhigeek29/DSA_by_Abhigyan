#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int main() {
    const int  a = 5; // cannot be reassigned
    // const to a pointer - pointer toh non constant hai , data constant hai
    const int *ptr = new int(2); // content inside a cannot be reassigned but pointer can be reassigned
    // int const *ptr = new int(2)  line no. 8 and line no. 9 are identical
    cout<<*ptr<<endl; // output -> 2
    int b = 5;
    ptr = &b;
    cout<<*ptr<<endl; // output->5

    // Pointer constant hai data non constant hai 
    int *const ptr2 = new int(2);
    *ptr2 = 20; // this will work
    // ptr2 = &b // wont work 
    return 0;
}