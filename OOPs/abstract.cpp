// Working of an Abstract class - an abstract class is a class which has a minimum of 1 virtual class and it cannot be instantiated
#include<iostream>
using namespace std;
// Here animal is the abstract class 
class Animal{
public:
    virtual void makesound(){
        cout<<"Animal makes a sound"<<endl;
    }
    virtual ~Animal(){
        cout<<"Animal Dtor called"<<endl;
    }
};

class Dog : public Animal
{
public:
    void makesound() override
    {
        cout<<"WOOF"<<endl;
    }
    ~Dog(){
        cout<<"Dog Dtor called"<<endl;
    }
};
class Cat : public Animal
{
public:
    void makesound() override
    {
        cout<<"meow"<<endl;
    }
    ~Cat(){
        cout<<"Cat Dtor called"<<endl;
    }
};

void makesound(Animal *animal){
    animal->makesound();
}
int main() {
    Animal *animal = new Dog();
    makesound(animal);
    animal = new Cat();
    makesound(animal);

    delete animal;
    return 0;
}