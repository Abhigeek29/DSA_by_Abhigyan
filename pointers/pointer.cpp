#include <iostream>
using namespace std;
void solve(int arr[],int size){
  cout<<"the size of array in the solve function is "<<sizeof(arr)<<endl;
}

int main() {
  int arr[5] = {1,2,3,4,5};
  cout<<"the size of array in the main function is "<<sizeof(arr)<<endl;
  solve(arr,5);
  return 0;
}