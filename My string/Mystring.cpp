#include "MyString.h"
#include <cstring> 

MyString::MyString()
{
    data = new char[1];
    length = 0;
    data[0] = '\0';
}