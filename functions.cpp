#include <iostream>
using namespace std;

/*
Func: Power of num
int power(int a, int b){
    int ans = 1;
    for(int i = 1; i<=b; i++){
        ans = ans * a;
    }
    return ans;
}
int main(){
    int a, b;
    cin >> a >> b;
    
    int answer = power(a,b);
    cout << "Power of " << a << ": " << answer << endl;
    return 0;
}

Func: Even or Odd
bool isEven(int a){
    if(a & 1){   
        return 0;
    }
    return 1;
}

int main(){
    int num, ans;
    cin >> num;
    if(isEven(num)){
        cout << num << " is Even." << endl;
    }
    else{
        cout << num << " is Odd." << endl;
    }
}

Func: Combinations of n
int factorial(int n){
    int fact = 1;
    for(int i = 1; i<=n;  i++){
        fact = fact*i;
    }
    return fact;
}
int nCr(int n, int r){
    int num = factorial(n);
    int denom = factorial(r) * factorial(n-r);
    return num / denom;
}
int main(){
    int n, r;
    cin >> n >> r;
    cout << "Answer: " << nCr(n,r);
}

Func: Counting upto n
void Counting(int n){
    for(int i = 1; i <= n; i++){
        cout << i << endl;
    }
}
int main(){
    int n;
    cin >> n;
    Counting(n);
    return 0;
}

Func: Check if num is prime
bool isPrime(int n){
    for(int i=2; i<n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int num;
    cin >> num;
    if(isPrime(num)){
        cout << num << " is Prime." << endl;
    }
    else{
        cout << num << " is Not Prime." << endl;
    }
}

Func: AP nth term
int AP(int n){
    return 3 * n + 7;
}
int main(){
    int n;
    cin >> n;
    int ans = AP(n);
    cout << n << "th Term of the AP is = " << ans << endl;
}

Func: Count number of set bits in 2 nums
int countSetBit(int a, int b){
    int count = 0, bit=0;
    while(a != 0 && b != 0){
        bit = a&1 + b&1;
        a = a >> 1;
        b = b >> 1;
    }
    return bit;
}
int main(){
    int a, b;
    cin >> a >> b;
    int ans = countSetBit(a,b);
    cout << "Number of set bits: " << ans << endl;
}

Func: Fibonacci series display nth term
int fibonacci(int n){
    int a = 0, b = 1, c;
    for(int i = 0; i<(n-2); i++){
        c = a+b;
        a = b;
        b = c;
    }
    return c;
}
int main(){
    int num;
    cin >> num;
    cout << fibonacci(num);
}

Func:
*/