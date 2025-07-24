// Understanding the difference between shallow and deep copy
#include<iostream>
using namespace std;

class abc{
private:
    
public:
    int x , *y;
    // abc(int x , int y){
    //     this->x = x;
    //     this->y = y;
    // }
    // initialisation list --> a type of constructor maker (not exacted definition)
    abc(int x , int y) : x(x),y(new int(y)){}
    void print(){
        cout<<"The value of x is "<<x<<endl;
        cout<<"The value of y is "<<y<<endl;
        cout<<"The value stored where the y  ptr points  is "<<*y<<endl;
    }

    // // dumb copy constructor 
    abc(const abc&obj){
        x = obj.x;
        y = obj.y;
    }


    // // Smart copy constructor - deep copy
    // abc(const abc&obj){
    //     this->x = obj.x;
    //     this->y = new int(*obj.y);
    // }

    ~abc(){
        delete y;
    }
}
;

// int main() {
//     abc a(1,2);
//     abc b(a);
//     // a object printed
//     cout<<"Inital a object printed"<<endl;
//     a.print();
//     // b object printed
//     cout<<"Inital a object printed"<<endl;
//     b.print();
//     *b.y = 20;
//     // a object printed
//     cout<<" a object printed after changes to b is made"<<endl;
//     a.print();
//     // b object printed
//     cout<<" a object printed after changes to b is made"<<endl;
//     b.print();
//     return 0;
// }

int main(){
    abc *a = new abc(1,2);
    abc b = *a;
    delete a;
    b.print();
    return 0;
}