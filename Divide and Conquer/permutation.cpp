// printing all permutations using backtracking 
/*  agar string ko by value pass karni hai toh bass line no
22 se backtracking wala code hatado
*/
#include<iostream>
#include<string.h>
using namespace std;

void printpermutation(string &str , int index){
    // Base case hit kargaya
    if(index>=str.length()){
        // print kardo uss string ko
        cout<<str<<" ";
        return ;
    }
    // ab harr element ko harr position par rakhkar dekhna hai
    for(int j = index ; j<str.length();j++){
        swap(str[index],str[j]);
        // recursion will handle
        printpermutation(str , index+1);
        // Backtrack -- warna base string hi change hojayegi kyuki by reference pass kara hai 
        swap(str[index],str[j]);
    }
}
int main() {
    string str = "ABC";
    int index = 0;
    cout<<"Printing all permutations of the string"<<endl;
    printpermutation(str,index);
    return 0;
}