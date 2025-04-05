#include <iostream>

using namespace std;

int n1, n2;
int a[100], b[100];

string Part(int a[], int b[]){
    int i = 0, check = 0;
    bool c = false;
    while(1){
        if(a[i] == b[0]){
            break;
        }
        i++;
    }
    int n = 0;
    for(;i<=n2; i++){
        if(a[i]==b[n]){
            c = true;

        }
        else {
            c = false;
            check++;
        }
        n++;
    }

    if(c && check == 0) return "Yes";
    else return "No";
}

int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];

    for (int i = 0; i < n2; i++) cin >> b[i];

    // Please write your code here.

    cout << Part(a, b);
    return 0;
}