#include <iostream>
using namespace std;

int createArray(int arr[], int size){
    int ele;
    for(int i = 0; i<size; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> ele;
        arr[i] = ele;
    }
}

int reverseArray(int arr[], int size){
    int start = 0;
    int end = size-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cout << "Enter length of array: ";
    cin >> n;
    int arr[n];
    createArray(arr, n);
    reverseArray(arr, n);
    printArray(arr,n);
    return 0;
}