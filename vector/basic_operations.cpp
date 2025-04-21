// Vectors 
//  To enter value -> push_back
//  To delete value -> pop_back  note:- it deletes the element from the back
//  v.at() also prints the element at the specified index
// V.clear accounts for clearing the complete vector 

// #include<iostream>
// #include<vector>
// using namespace std ;
// void print_vector(vector<int>v){
//     int size = v.size();
//     for(int i = 0 ; i<size ; i++){
//         cout<<v[i]<<" ";
//     }
// }
// int main(){
//     vector<int>v;
//     // v.push_back(1);
//     // v.push_back(2);
//     // v.push_back(3);
//     // print_vector(v);
//     while(1){
//         int d ; cin>>d;
//         v.push_back(d);
//         cout<<"Capacity :"<<v.capacity()<<" size :"<<v.size();
//     }
//     return 0 ;
// }


#include<iostream>
#include<vector>
using namespace std;
// New method of printing vector 
void print_vector(vector<char> v){
    for(auto it:v){
        cout<<it<<" ";
    }
}
int main(){
    // Vector initiliazation methods
    vector<char>vec{'a','b','c'};
    // cout<<vec.front()<<endl;
    // cout<<vec.back()<<endl;
    cout<<"Printed vector is : "<<endl;
    print_vector(vec);
    // vec.front();
    return 0 ;
}