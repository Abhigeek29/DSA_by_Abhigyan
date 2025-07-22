#include<iostream>
using namespace std;
class Student{
private:
    string gf;
public:
    int id ;
    int age ;
    string Name;

    void eat(){
        cout<<"Eats"<<endl;
    }
    void study(){
        cout<<"Studies"<<endl;
    }
    Student(){
        cout<<"My constructor";
    }
    Student(int id,int age,string Name,string gfname){
        this->id =id;
        this->age =age;
        this->Name =Name;
        this->gf = gfname;
    }
private:
    void gfchatting(){
        cout<<"he chats"<<endl;
    }
};
int main() {
    Student s1;
    Student s2(1,12,"Abhigyan","Tanishka");
    cout<<s2.Name<<endl;
    cout<<s2.age<<endl;
    // cout<<s2.gf<<endl; // error because gf is a private attribute

    // Student s2;
    return 0;
}

// Change the order of below datatypes to see how padding works 

// #include<iostream>
// using namespace std;
// class Student{
//     char age ;
//     bool Name;
//     double a ;
//     int id ;
//     // void eat(){
//     //     cout<<"Eats"<<endl;
//     // }
//     // void study(){
//     //     cout<<"Studies"<<endl;
//     // }
// };
// int main() {
//     // Student s1;
//     // Student s2;
//     cout<<sizeof(Student)<<endl;
//     return 0;
// }