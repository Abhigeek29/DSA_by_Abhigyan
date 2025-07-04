#include<iostream>
using namespace std;

void create_array(int arr[], int size, char name){
    cout << "Enter the input for array " << name << ":" << endl;
    for(int i = 0 ; i < size; i++){
        cout << "Enter the element at position " << i << ": ";
        cin >> arr[i];
    }
}

int find_common(int A[], int B[], int C[], int n1, int n2, int n3){
    int i = 0, j = 0, k = 0;
    while(i < n1 && j < n2 && k < n3){
        if(A[i] == B[j] && B[j] == C[k]){
            return A[i];  // common found
        }
        else if(A[i] < B[j]){
            i++;
        }
        else if(B[j] < C[k]){
            j++;
        }
        else{
            k++;
        }
    }
    return -1; // common not found
}

int main(){
    int n1 , n2 , n3;
    cout << "Enter number of elements for array A: ";
    cin >> n1;
    int A[n1];

    cout << "Enter number of elements for array B: ";
    cin >> n2;
    int B[n2];

    cout << "Enter number of elements for array C: ";
    cin >> n3;
    int C[n3];

    create_array(A, n1, 'A');
    create_array(B, n2, 'B');
    create_array(C, n3, 'C');

    int result = find_common(A, B, C, n1, n2, n3);
    
    if(result != -1)
        cout << "Common element is: " << result << endl;
    else
        cout << "No common element found." << endl;

    return 0;
}
