#include<iostream>
using namespace std;

class Student{
public:
    int id ; // every variable till nos is stored in a stack memory
    int age;
    string name;
    int nos;
    int *v; // a new pointer is made
    // constructor
    Student(int id , int age , string name , int nos){
        this->id= id;
        this->age= age;
        this->name= name;
        this->nos= nos ;
        this->v= new int(2); // this will be stored in a heap memory ,  if not freed then memory will leak 
        // hence a destructor is needed
    }
    // Copy Constructor 
    Student(const Student &srcobj){
        this->id = srcobj.id;
        this->age= srcobj.age;
        this->name = srcobj.name;
        this->nos = srcobj.nos;

    }
    // destructor
    ~Student(){
        cout<<"dtor called"<<endl;
        delete v;
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