#include<iostream>
using namespace std;
class Animal{
public:
    //isko virtual banaya taaki run time par decision le sakey
    virtual void sound(){
        cout<<"animal sound called"<<endl;
    }
    //isko virtual banaya taaki run time par decision le sakey
    virtual ~Animal(){
        cout<<"Animal dtor"<<endl;
    }
};
class Dog : public Animal
{
public:
    void sound() override
    {
        cout<<"Woof Woof"<<endl;
    }
    ~Dog() override 
    {
        cout<<"Dog dtor"<<endl;
    }
};
class Cat : public Animal
{
public:
    void sound() override
    {
        cout<<"Meow Meow"<<endl;
    }
    ~Cat() override 
    {
        cout<<"Cat dtor"<<endl;
    }
};
void sound(Animal *animal){
    animal->sound();  // this line is polymorphic
}
int main() {
    Animal *animal = new Dog();
    sound(animal);
    // animal = new Cat();
    // sound(animal);
    delete animal;
    return 0;
}