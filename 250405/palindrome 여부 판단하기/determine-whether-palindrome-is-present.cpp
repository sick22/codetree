#include <iostream>
#include <string>

using namespace std;

string A;

string Palin(string A){
    bool c = true;
    int al = A.length() - 1;
    for(int i = 0; i < al/2; i++){
        if(A[i] == A[al - i]) continue;
        else {
            c = false;
            break;
        }
    }
    if(c) return "Yes";
    else return "No";
}

int main() {
    cin >> A;
    cout << Palin(A);
    // Please write your code here.

    return 0;
}