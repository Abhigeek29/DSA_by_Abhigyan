#include<iostream>
using namespace std;
class Student{
public:
    static int x , y;
    void print() const{
        cout<<x<<" "<<y<<" "<<endl;
    }
    // A static method - it has no this pointer since it is accessible to the whole class
    static void submit(){
        cout<<"I am submitting"<<endl;
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
    Student::submit(); // this is how you call static method of a class
    return 0;
}