#ifndef MYSTRING_H
#define MYSTRING_H

#include<iostream>

class MyString{
private:
    char *data; // pointer to the character array
    int length; // size of my string 

public:
// default ctor
    MyString();
// parametrized ctor
    MyString(const char *str);
// Copy ctor 
    MyString(const MyString &other);
// Dtor
    ~MyString();

    int size() const;
    bool empty() const;
    
};

#endif //MYSTRING_H