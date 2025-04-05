#include <iostream>

using namespace std;

int n, m;

void Changer(int a, int b){
    int temp;

    n = b;
    m = a;

}

int main() {
    cin >> n >> m;
    Changer(n,m);
    cout << n << " " << m;
    // Please write your code here.

    return 0;
}