#include<iostream>
using namespace std;

void sortarray(int arr[], int s , int e){
    int mid = s + (e-s)/2;

    // leftarray index 
    int lenleft = mid - s +1;
    int lenright = e - mid;

    // creating left subarray
    int *leftarray = new int[lenleft];
    // creating right subarray
    int *rightarray = new int[lenright];

    //  copying the elements from the original array into respective sub arrays
    int k = s;
    // copying in left subarray
    for(int i = 0 ; i<lenleft ;i++){
        leftarray[i] = arr[k];
        k++;
    }
    // copying in right subarray
    k = mid +1;
    for(int i = 0 ; i<lenright ;i++){
        rightarray[i] = arr[k];
        k++;
    }

    // merging algorithm with two pointers approach 
    // dono arrays ko merge isiliye kar paa rahe hai kyuki woh pehle se sorted hokar ayi hai 
    // kaise sorted hai pehle se? recursion ne end tak array ko toda hoga , toh single element humesha khudse sorted hota hai 
    // toh 2 single element ko merge karne ki call gayi , aise recursively puri array merge hogayi and sort bhi
    // leftarray index
    int leftindex = 0;
    // right array index
    int rightindex = 0;
    // the below index is the main array index (which is passed into this function) and we are directly modifying it
    int mainarrayindex = s;

    while(leftindex <lenleft && rightindex<lenright){
        // left array ka ith element chhota hai right array ka ith element se
        if(leftarray[leftindex]<rightarray[rightindex]){
            arr[mainarrayindex] = leftarray[leftindex];
            mainarrayindex++;
            leftindex++;
        }
        else{
            arr[mainarrayindex] = rightarray[rightindex];
            mainarrayindex++;
            rightindex++;
        }
    }

    // if any remaining elements 
    // left array chhoti reh gayi right ke bache hai
    while(rightindex<lenright){
        arr[mainarrayindex] = rightarray[rightindex];
        mainarrayindex++;
        rightindex++;
    }

    // right array chhoti reh gayi left ke bache hai
    while(leftindex<lenleft){
        arr[mainarrayindex] = leftarray[leftindex];
        mainarrayindex++;
        leftindex++;
    }
    delete [] leftarray;
    delete [] rightarray ;
}

void mergesort(int arr[],int s , int e){
    // base case 
    if(s>=e){
        return ;
    }
    
    // mid generation
    int mid = s + (e-s)/2;
    // left ki call 
    mergesort(arr,s , mid);
    // right ki call
    mergesort(arr,mid+1,e);
    // sort the left and right array

    sortarray(arr , s , e);

}

int main() {
    int arr[] = {20,10,50,70,30,40};
    int size = 6;
    int s = 0;
    int e = size -1;
    cout<<"Array before merge sort"<<endl;
    for(int i = 0 ; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    mergesort(arr,s,e);
    cout<<"Array after merge sort"<<endl;
    for(int i = 0 ; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}