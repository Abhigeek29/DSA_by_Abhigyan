// The delimeter of cin is either newline , space or tab , therefore if in input 
//  a space is given then it only takes value before the space
// So we use new function which id depicted in the code below 
#include <iostream>
using namespace std;
int main(){
    char ch[50];
    cin.getline(ch,100); // New utitlity function , its delimeter is newline only
    cout<<ch;
    return 0;
}