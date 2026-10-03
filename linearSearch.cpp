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

bool search(int arr[], int size, int key){
    for(int i = 0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n, key;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    createArray(arr, n);
    cout << "Enter key to search: ";
    cin >> key;
    bool found = search(arr, n, key);
    if(found){
        cout << "Element found!" << endl;
    }
    else{
        cout << "Element Not Found!" << endl;
    }
}
