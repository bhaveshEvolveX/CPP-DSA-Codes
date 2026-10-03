#include <iostream>
using namespace std;

int sum_ele(int arr[],int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum = sum+arr[i]; 
    }
    return sum;
}
int main(){
    int n,ele;
    cout << "Enter number of Elements: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cout << "Enter Element: ";
        cin >> ele;
        arr[i] = ele;
    }
    cout << "Sum of Elements: " << sum_ele(arr, n);
}