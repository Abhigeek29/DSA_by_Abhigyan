#include<iostream>
using namespace std;
class Student{
public:
    static int x , y;
    void print() const{
        cout<<x<<" "<<y<<" "<<endl;
    }
};
int Student:: x;
int Student:: y;

int main() {
    Student obj1;
    obj1.x = 10;
    obj1.y = 20;
    obj1.print();
    Student obj2;
    obj2.x = 100;
    obj2.y = 200;
    obj2.print();
    obj1.print();
    return 0;
}