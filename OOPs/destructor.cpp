#include<iostream>
using namespace std;

class Student{
public:
    int id ;
    int age;
    string name;
    int nos;
    // constructor
    Student(int id , int age , string name , int nos){
        this->id= id;
        this->age= age;
        this->name= name;
        this->nos= nos ;
    }
    // Copy Constructor 
    Student(const Student &srcobj){
        this->id = srcobj.id;
        this->age= srcobj.age;
        this->name = srcobj.name;
        this->nos = srcobj.nos;

    }
    ~Student(){
        cout<<"dtor called"<<endl;
    }
};
int main() {
    Student s1(10,15,"Messi",8);
    {
        Student s2(s1);
        cout<<s2.name<<endl;
    }
    cout<<s1.age<<endl;
    return 0;
}