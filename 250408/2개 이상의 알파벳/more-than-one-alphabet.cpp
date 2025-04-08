#include <iostream>
#include <string>

using namespace std;

string A;
int arr[27];

string Al(string A){
    int j;
    int t = 0;
    for(int i = 0; i < A.length(); i++){
        j = A[i] - 'a';
        arr[j]++;
    }

    for(int k = 0; k < 26; k++){
        if(arr[k] > 0)  t++;
    }
    if(t > 1) return "Yes";
    else return "No";
}

int main() {
    cin >> A;
    cout << Al(A);
    // Please write your code here.

    return 0;
}