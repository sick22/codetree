#include <iostream>

using namespace std;

int a;
int c;
char o;

int Math(int a, char o, int c){
    if(o == '+') return a + c;
    else if(o == '-') return a - c;
    else if(o == '/') return a / c;
    else return a * c;
}

int main() {
    cin >> a >> o >> c;

    if(o != '+' && o != '-' && o != '/' && o != '*') {
        cout << "False";
    }
    else
        cout << a << " " << o << " " << c << " = " << Math(a, o , c);
    // Please write your code here.

    return 0;
}