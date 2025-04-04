#include <iostream>

using namespace std;

int a, b;

int Check(int a,int b){
    int num = 0;
    for(int i = a; i <= b; i++){
        if(i % 2 != 0 && i % 10 != 5){
            if(i % 3 != 0 || i % 9 == 0){
                num++;

            }
        }
    }
    return num;
}

int main() {
    cin >> a >> b;

    // Please write your code here.
    cout << Check(a, b);
    return 0;
}