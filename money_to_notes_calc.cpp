#include <iostream>
using namespace std;

int main(){
    int money, n=1;
    cout << "Enter Money:";
    cin >> money;
    while(n<=4){
    switch (n)
    {
    case 1:
        int note_100;
        note_100 = money / 100;
        cout << "You require " << note_100 << " 100rs notes" << endl;
        money %= 100;
        n++;
        break;
    case 2:
        int note_50;
        note_50 = money / 50;
        cout << "You require " << note_50 << " 50rs notes" << endl;
        money %= 50;
        n++;
        break;
    case 3:
        int note_20;
        note_20 = money / 20;
        cout << "You require " << note_20 << " 20rs notes" << endl;
        money %= 20;
        n++;
        break;
    case 4:
        int note_1;
        note_1 = money / 1;
        cout << "You require " << note_1 << " 1rs notes" << endl;
        money %= 1;
        n++;
        break;
    default:
        cout << "Please enter valid amount" << endl;
        break;
    }
    }
}