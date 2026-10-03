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

int swapAltArr(int arr[], int size){
    int temp;
    for(int i = 0; i<size; i+=2){
        if((i+1) < size){
            temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
        }
    }
}

// Below function is same as above 
// int swapAltArr(int arr[], int size){
//     for(int i = 0; i<size; i+=2){
//         if((i+1) < size){
//             swap(arr[i], arr[i+1]);
//         }
//     }
// }

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
    swapAltArr(arr, n);
    printArray(arr,n);
}