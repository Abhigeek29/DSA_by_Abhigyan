// We will see how to access private attributes and functions
#include<iostream>
using namespace std;

class Student{
private:
    string gf;
    void gfchat(){
        cout<<"chats with gf"<<endl;
    }
public:
    int id ; 
    int age;
    string name;
    int nos;
    // constructor 1
    Student(int id , int age , string name , int nos){
        this->id= id;
        this->age= age;
        this->name= name;
        this->nos= nos ;
    }
    // cosntructor 2 
    Student(int id , int age , string name , int nos,string gf){
        this->id= id;
        this->age= age;
        this->name= name;
        this->nos= nos;
        this->gf = gf;
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
    }

    // getter and setter
    string getgfname(){
        return gf;
    }
    void setgfname(string gfname){
        this->gf=gfname;
    }
};
int main() {
    Student s1(10,15,"Messi",8,"Antonella"); 
    cout<<s1.getgfname()<<endl;
    s1.setgfname("Georgina");
    cout<<"Name changed to "<<s1.getgfname()<<endl;
    return 0;
}