#include<iostream>
using namespace std;
#define PI 3.145 // this a macro , can be used anywhere - neither it is variable nor it is taking any space
float circlearea(float r){
    cout<<PI*r*r;
}
int main() {
    circlearea(5);
    return 0;
}