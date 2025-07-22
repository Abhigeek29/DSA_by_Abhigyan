#include<iostream>
using namespace std;
class Student{
    int id ;
    int age ;
    string Name;

    void eat(){
        cout<<"Eats"<<endl;
    }
    void study(){
        cout<<"Studies"<<endl;
    }
};
int main() {
    Student s1;
    Student s2;
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