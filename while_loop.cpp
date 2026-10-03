/* 
Program 1:
#include<iostream>
using namespace std;

int main(){
    int n, i = 1;
    cin >> n;
    while(i<=n){
        cout << i << " ";
        i = i+1;
    }
}
*/

/*
Program 2:
#include<iostream>
using namespace std;

int main(){
    int n, i = 1, sum = 0;
    cout << "Enter any number:";
    cin >> n;
    while(i<=n){
        sum = sum+i;
        i = i+1;
    }
    cout << "Sum of " << n << " numbers is: " << sum << endl; 
}
*/

/*
Program 3:
#include <iostream>
using namespace std;

int main(){
    int n, i = 2, sum = 0;
    cout << "Enter any number:";
    cin >> n;
    while(i<=n){
        if(i % 2 == 0){
            sum = sum+i;
        }
        i = i+1;
    }
    cout << "Sum of even numbers upto " << n << " is: " << sum << endl; 
}
*/

/*
Program 4:
#include <iostream>
using namespace std;

int main(){
    float cel = 0, farht = 32, n, i = 1;
    cout << "Enter any limit:";
    cin >> n;
    while(i<=n){
        cout << "Fahrenheit: " << farht << " , Celsius: " << cel << endl;
        farht = farht + 1;
        // f = (1.8 * c) + 32
        // c = (f - 32)/1.8
        cel = (farht - 32) / 1.8;
        i = i + 1;
    }
}
*/

/*
Program 5
#include <iostream>
using namespace std;

int main(){
    int n, i=2;
    cout << "Enter any number:";
    cin >> n;
    while(i<n){
        if(n % i == 0){
            cout << "Not Prime for " << i << endl;
        }
        else{
            cout << "Prime for " << i <<endl;
        }
        i = i+1;
    }
}
*/