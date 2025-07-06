// to showcase how char arrays work and how are they different from string datatype
#include<iostream>
using namespace std;

int main() {
    int arr[3] = {1,2,3};
    cout<<arr<<endl;  // prints a random memory address
    char str[] = {'a','b','c'};
    cout<<str<<endl; // converts character array into string but not of proper type 
    return 0;
}