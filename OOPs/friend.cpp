#include<iostream>
using namespace std;
class A{
    int x ;
public:
    int getA() const{
        return x;
    }
    void setA(int _val){
        this->x = _val;
    }
    friend class B;
};
class B{
public:
    void print(const A &a){
        // cout<<a.getA()<<endl; // chalkayega koi dikkat nhi but iska dusra tarika is friend keyword
        cout<<a.x<<endl;
    }
};

int main() {
    return 0;
}