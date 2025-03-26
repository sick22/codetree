#include <iostream>

using namespace std;

int n;
int result;
int An(int N){
    if(N == 1) return result;
    if(N%2==0){
        result++;
        return An(N/2);
    }
    if(N%2==1){
        result++;
        return An(N * 3 + 1);
    }   
}
int main() {
    cin >> n;
    cout << An(n);
    // Please write your code here.

    return 0;
}