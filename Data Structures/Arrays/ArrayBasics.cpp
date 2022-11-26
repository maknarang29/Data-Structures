#include <iostream>
#include <vector>
using namespace std;

class Array{
//Searching an element in array (unsorted) [Linear Search] 
public:
int Search(int arr[], int elem){
    int len = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < len; i++){
        if (arr[i] == elem) return i;
    };
    return -1;
}

//Insertion of element in array
int insert(int arr[], int n,int x, int pos){
    //n is the size of the array(location of last element in array)
    int capacity =  sizeof(arr)/sizeof(arr[0]);
    if (n == capacity) return n;
    int idx = pos-1;
    for (int i = n-1; i>=idx;i--){
        arr[i+1] = arr[i];
    };
    arr[idx] = x;
    return (n+1);
};

//Deletion of an element
int Delete(int arr[], int elem){
    int loc = Search(arr, elem);
    int capacity =  sizeof(arr)/sizeof(arr[0]);
    for (int i = loc; i<= capacity; i++){
        arr[i] = arr[i+1];
    };
    return -1;
}
//Find the largest element
int findLargest(int arr[]){
    int max = arr[0];
    int capacity =  sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<=capacity;i++){
        if(arr[i]>max) max = arr[i];
    };
    return max;
};
};