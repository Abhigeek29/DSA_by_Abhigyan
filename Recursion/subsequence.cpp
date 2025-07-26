// Bohot Important concept hai 
/* Isme either hum string ke ek element ko include karte hai ya exclude
uske basis par decision lena hota hai 

*/
#include<iostream>
using namespace std;

void subsequences(string str , string output , int index){
    if(index>=str.length()){
        // aise case mai output string ban gayi hogi
        cout<<"-> "<<output<<endl;
        return;
    }
    // exclude condition 
    subsequences(str,output,index+1);
    // include condition
    output.push_back(str[index]);
    subsequences(str, output , index+1);
}

int main() {
    int index = 0 ;
    string str = "HOT";
    string output = "";
    subsequences(str , output,index);
    return 0;
}