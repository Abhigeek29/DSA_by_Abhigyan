// Demonstration of npos in the string 
/* npos stands for no position
use case when str.find() function is used to find the existence of a substring in a string then it returns string :: npos
*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string str1 = "Yaar tera superstar desi kalakar";
    string str2 = "star";
    if(str1.find(str2)== string::npos){
        cout<<"String does not exists";
    }
    else{
        cout<<"String exists";
    }
    return 0;
}