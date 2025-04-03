#include <iostream>
#include <cmath>

using namespace std;

int a, b, result;

int mult(int a, int b){
    return pow(a, b);
}

int main() {
    cin >> a >> b;

    // Please write your code here.
    cout << mult(a, b);
    return 0;
}