/*
Pattern 1:
#include <iostream>
using namespace std;

int main(){
    int n, i=1;
    cout << "Enter any number:";
    cin >> n;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout << "* ";
            j = j+1;
        }
        cout << endl;
        i = i+1;
    }
}
*/

/*
Pattern 2:
#include <iostream>
using namespace std;

int main(){
    int n, i = 1;
    cout << "Enter any number:";
    cin >> n;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << i << " ";
            j = j+1;
        }
        cout << endl;
        i = i+1;
    }
}
*/

/*
Pattern 3:
#include <iostream>
using namespace std;

int main(){
    int i = 1, n;
    cout << "Enter any number:";
    cin >> n;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}
*/

/*
Pattern 4:
#include <iostream>
using namespace std;

int main(){
    int i=1, n;
    cout << "Enter any number";
    cin >> n;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << n-j+1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}
*/

/*
Pattern 5:
#include <iostream>
using namespace std;

int main(){
    int n, i = 1, cnt = 1;
    cout << "Enter any number:";
    cin >> n;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << cnt << " ";
            cnt++;
            j++;
        }
        i++;
        cout << endl;
    }
}
*/

/*
Pattern 6:
#include <iostream>
using namespace std;

int main(){
    int n, i=1;
    cout << "Enter any number:";
    cin >> n;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout << "* ";
            j++;
        }  
        cout << endl;
        i++;
    }
}
*/

/*
Pattern 7:
#include <iostream>
using namespace std;

int main(){
    int row=1, n;
    cout << "Enter any number:";
    cin >> n;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout << row << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}
*/

/*
Pattern 8:
#include <iostream>
using namespace std;

int main(){
    int n, row=1, cnt = 1;
    cout << "Enter any number:";
    cin >> n;
    while(row<=n){
        int col = 1;
        while(col<=row){
            cout << cnt << " ";
            cnt++;
            col++;
        }
        cout << endl;
        row++;
    }
}
*/

/*
Pattern 9:
#include <iostream>
using namespace std;

int main(){
    int row=1, n;
    cout << "Enter any number:";
    cin >> n;
    while(row<=n){
        int col = 1;
        int value = row;
        while(col<=row){
            cout << value;
            value++;
            col++;
        }
        cout << endl;
        row++;
    }
}
*/

/*
Pattern 9.1:
#include <iostream>
using namespace std;

int main(){
    int row=1, n;
    cout << "Enter any number:";
    cin >> n;
    while(row<=n){
        int col = 1;
        while(col<=row){
            cout << row+col-1 << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}
*/

/*
Pattern 10:
#include <iostream>
using namespace std;

int main(){
    int n, row = 1;
    cout << "Enter any number:";
    cin >> n;
    while(row<=n){
        int col = 1;
        while(col<=row){
            cout << row-col+1 << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}
*/

/*
Pattern 11:
#include <iostream>
using namespace std;

int main(){
    int n, row = 1;
    cout << "Enter any number:";
    cin >> n;
    while(row<=n){
        int col = 1;
        while(col<=n){
            char ch = 'A' + row - 1;
            cout << ch << " ";
            col++;
        }
        cout << endl;
        row++;
    } 
}
*/