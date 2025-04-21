// A jagged array is an array where different rows can have different number of columns
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <vector <int> > brr;
    vector<int> vec1(5,10);
    vector<int> vec2(7,11);
    vector<int> vec3(8,12);
    vector<int> vec4(9,13);
    vector<int> vec5(10,14);
    brr.push_back(vec1);
    brr.push_back(vec2);
    brr.push_back(vec3);
    brr.push_back(vec4);
    brr.push_back(vec5);

    for(int i = 0 ; i<brr.size();i++){
        for(int j = 0 ; j<brr[i].size();j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0 ;
}