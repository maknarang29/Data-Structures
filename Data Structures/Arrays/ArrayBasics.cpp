#include <iostream>
#include <vector>
using namespace std;


//Searching an element in array (unsorted) [Linear Search] 

int Search(int arr[], int elem, int n){
    
    for (int i = 0; i < n; i++){
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
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,9,4,6,3,25,6,23,46,12};
    cout<<Search(arr,25);
    insert(arr,18,3,1);
    cout<<arr;
    Delete(arr,3);
    cout<<arr;
    cout<<findLargest(arr);

}