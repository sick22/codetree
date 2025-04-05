#include <iostream>

using namespace std;

int a, b;

void Fu(int n, int m){
    if(n > m){
        a = n + 25;
        b = m * 2;
    }
    else {
        a = n * 2;
        b = m + 25;
    }
}

int main() {
    cin >> a >> b;

    Fu(a, b);

    cout << a << " " << b;
    // Please write your code here.

    return 0;
}