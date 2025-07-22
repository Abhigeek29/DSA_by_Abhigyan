// This code is depicting inheritance
#include<iostream>
using namespace std;
class Bird{
public:
    int age ; 
    string color;
    int nol;
    string eater;

    void fly(){
        cout<<"it is "<<__func__<<endl;
    }
     void chirp(){
        cout<<"it is "<<__func__ <<endl;
    }
};

class Sparrow: public Bird{
public:
    Sparrow(int umar , string rang, int taang,string eater){
        this->age= umar;
        this->color= rang;
        this->nol  = taang;
        this->eater = eater;

    }
    void grassing(){
        cout<<"it is "<<__func__ <<endl;
    }
};
class Pigeon: public Bird{
public:
    void guttering(){
        cout<<"it is "<<__func__ <<endl;
    }
};

int main() {
    Sparrow s(20,"Neela",2,"Vegetarian");
    s.age= 15;
    s.grassing();
    cout<<s.age<<endl;
    return 0;
}