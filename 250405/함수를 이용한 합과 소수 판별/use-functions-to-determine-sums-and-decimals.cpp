#include <iostream>

using namespace std;

int a, b;

int Check(int a, int b){
    int result = 0;
    for(int i = a; i <= b; i++){
        bool c = true;
        for(int j = 2; j < i; j++){
            if(i % j == 0) c = false;
        }
        if(((i % 10) + (i / 10)) % 2 != 0) c = false;
        
        if(c) {
            result++;

            }
    }
    return result;
}

int main() {
    cin >> a >> b;
    cout << Check(a, b);
    // Please write your code here.

    return 0;
}