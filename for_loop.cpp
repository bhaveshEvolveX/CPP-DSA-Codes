/*Prog 1
#include <iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cout << "Enter the value of n:";
    cin >> n;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    cout << "Sum of " << n << " numbers: " << sum;
}
Prog 2:
#include <iostream>
using namespace std;

int main(){
    int a = 0, b = 1, n, c;
    cout << "Enter the value of n:";
    cin >> n;
    cout << a << " " << b << " ";
    for(int i = 0; i<n-2; i++){
        c = a+b;
        cout << c << " ";
        a = b;
        b = c;
    }
}

Prog 3:
*/
#include <iostream>
using namespace std;

int main(){
    int n, isPrime = 1;
    cout << "Enter any number:";
    cin >> n;
    for(int i = 2; i<n; i++){
        if(n%i == 0){
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 0)
        cout << n << " is Not a Prime Number.";
    else
        cout << n << " is Prime Number.";
}