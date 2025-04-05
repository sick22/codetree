#include <iostream>

using namespace std;

int n;
int arr[50];

void changer(int arr[]){
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            arr[i] /= 2;
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    changer(arr);
    for(int j = 0; j < n; j++){
        cout << arr[j] << " ";
    }
    // Please write your code here.

    return 0;
}