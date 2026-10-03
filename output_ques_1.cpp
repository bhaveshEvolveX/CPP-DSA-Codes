/*Ques 1
#include <iostream>
using namespace std;

int main(){
    int a = 10 , b = 1;
    a = 10;
    if(++a)
        cout << b;
    else
        cout << ++b;
}
Ques 2
#include <iostream>
using namespace std;

int main(){
    int a = 1 , b = 2;
    if(a-- > 0 && ++b > 2)
    cout << "Stage1- Inside If";
    else
    cout << "Stage2 - Inside else";
    cout << a << " " << b << endl;
}

Ques 3
#include <iostream>
using namespace std;

int main(){
    int a = 1 , b = 2;
    if(a-- > 0 || ++b > 2)
    cout << "Stage1- Inside If";
    else
    cout << "Stage2 - Inside else";
    cout << a << " " << b << endl;
}

Ques 4
#include <iostream>
using namespace std;

int main(){
    int num = 3;
    cout << (25 * (++num));
}

Ques 5
#include <iostream>
using namespace std;

int main(){
    int a = 1 , b = a++, c = ++a;
    cout << b;
    cout << c;
}
*/
