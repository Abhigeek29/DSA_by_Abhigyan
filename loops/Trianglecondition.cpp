#include<iostream>
using namespace std;
int check_triangle(int a,int b,int c){
    if(a==0 && b==0 && c==0){
        cout<<"A triangle with such dimensions cannot be formed"<<endl;
    }
    else if(a+b>c && a+c>b && b+c>a){
        cout<<"Yes a triangle can be formed"<<endl;
        cout<<"Perimeter of the triangle is "<<a+b+c<<endl;
    }
    else{
        cout<<"Triangle cannot be formed"<<endl;
    }
}
int main(){
    int a,b,c;
    cout<<"Enter Values for 3 side"<<endl;
    cin>>a>>b>>c;
    check_triangle(a,b,c);
}