// Static Polymorphism 
#include<iostream>
using namespace std;
// function overloading static polymorphism
int add(int a , int b){
    return a+b;
}
double add(double a , double b){
    return a+b;
}

int main() {
    cout<<add(4,5)<<endl;
    cout<<add(10.8,9.2)<<endl;
    return 0;
}