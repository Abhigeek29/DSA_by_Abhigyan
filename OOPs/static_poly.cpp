// Static Polymorphism 
#include<iostream>
using namespace std;
// // function overloading static polymorphism
// int add(int a , int b){
//     return a+b;
// }
// double add(double a , double b){
//     return a+b;
// }

// Operator Overloading 
class Vector{
    int x , y;
public:
    // Vector(int x , int y){
    //     this->x=x;
    //     this->y = y;
    // }
    // Initialisation list  --> this is same as above
     // Constructor using Initialization List
    Vector(int x, int y) : x(x), y(y) {}

    // Display function with name for clarity
    void display(const string &name) const {
        cout << name << " => (" << x << ", " << y << ")" << endl;
    }

    // Operator Overloading: v1 + v2 updates v1
    void operator+(const Vector &src) {
        x += src.x;
        y += src.y;
        cout << "[+] Modification done on current object.\n";
    }

    // Operator Overloading: v1 - v2 updates v1
    void operator-(const Vector &src) {
        x -= src.x;
        y -= src.y;
        cout << "[-] Modification done on current object.\n";
    }
};

int main() {
    // cout<<add(4,5)<<endl;
    // cout<<add(10.8,9.2)<<endl;

    // Problem Statement , when i do v1 + v2 answer should be stored in v1
       Vector v1(4, 5);
    Vector v2(10, 20);

    cout << "Initial States:\n";
    v1.display("v1");
    v2.display("v2");
    cout << "--------------------------\n";

    cout << "v1 = v1 + v2\n";
    v1 + v2;
    v1.display("v1");
    v2.display("v2");
    cout << "--------------------------\n";

    cout << "v2 = v2 + v1\n";
    v2 + v1;
    v1.display("v1");
    v2.display("v2");
    cout << "--------------------------\n";

    cout << "v2 = v2 - v1\n";
    v2 - v1;
    v1.display("v1");
    v2.display("v2");
    cout << "--------------------------\n";

    cout << "v1 = v1 - v2\n";
    v1 - v2;
    v1.display("v1");
    v2.display("v2");
    cout << "--------------------------\n";

    return 0;
}