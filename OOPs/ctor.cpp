// we discuss whether a constructor can be made private or not 
#include<iostream>
using namespace std;

class box{
private:
    int width;
    box(int _width): width(_width){}
public:
    int getwidth() const{
        return width;
    }
    void setwidth(int val){
        width = val;
    }
    friend class Boxfactory;
};
class Boxfactory{
    int count;
public:
    box getAbox(int _w){
        ++count;
        return box(_w);
    }
};

int main() {
    // box a; // gives error since its ctor is private
    Boxfactory bfactor;
    box b = bfactor.getAbox(5);
    cout<<b.getwidth()<<endl;
    return 0;
}