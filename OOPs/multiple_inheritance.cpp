#include<iostream>
using namespace std;
class Person{
public:
    void walk(){
        cout<<"he is "<<__func__<<endl;
    }
};

// class Teacher: public Person{
//     void teaches(){
//         cout<<"he is "<<__func__<<endl;
//     }
// };

class Teacher: virtual public Person{
    void teaches(){
        cout<<"he is "<<__func__<<endl;
    }
};

// class Researcher: public Person{
//     void researches(){
//         cout<<"he is "<<__func__<<endl;
//     }
// };
class Researcher:virtual public Person{
    void researches(){
        cout<<"he is "<<__func__<<endl;
    }
};

class Proffesor: public Teacher, public Researcher
{
    void teaches(){
        cout<<"he is "<<__func__<<endl;
    }
};

int main() {
    Proffesor p ;
    // p.walk();  shows ambiguity since which class to call the common walk function from 

    // Diamond Problem solution - 1
    //  Scope resolution 
    // p.Teacher::walk();
    // p.Researcher::walk();

    // Solution 2 : Virtual class
    // Dono walk ka matlab ek hi baat hai 
    p.walk();
    return 0;
}