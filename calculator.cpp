#include <iostream>
using namespace std;

int main(){
    int a, b, n;
    char op;
    cout << "Enter number 1:";
    cin >> a;
    cout << "Enter number 2:";
    cin >> b;
    cout << "Enter Operation:";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << a+b << endl;
        break;
    case '-':
        cout << a-b << endl;
        break;
    case '*':
        cout << a*b << endl;
        break;
    case '/':
        cout << a/b << endl;
        break;
    case '%':
        cout << a%b << endl;
        break;
    default:
        cout << "Please enter valid operation!" << endl;
        break;
    }
}