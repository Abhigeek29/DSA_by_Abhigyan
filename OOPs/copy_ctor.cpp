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
};
int main() {
    Student s1(1,12,"Harshit",9);
    Student s2(s1); // method 1 of copying 
    Student s3 = s1; // method 2 of copying 
    cout<<s2.name<<endl;
    cout<<s3.name<<endl;
    cout<<s1.name<<endl;
    return 0;
}