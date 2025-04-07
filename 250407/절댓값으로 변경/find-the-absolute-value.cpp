#include <iostream>

using namespace std;

int n;
int arr[50];

void Plus(int arr[], int N){
    for (int i = 0; i < N; i++) {
        if(arr[i] < 0){
            arr[i] *= -1;
        }
    }

}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    Plus(arr, n);
    for (int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }
    // Please write your code here.

    return 0;
}