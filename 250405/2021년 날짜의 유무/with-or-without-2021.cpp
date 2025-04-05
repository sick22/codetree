#include <iostream>

using namespace std;

int M, D;
int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
string Md(int m, int d){
    
    if(m > 12) return "No";
    else{
        m--;
        if(d > month[m]) return "No";
        else return "Yes";
    }
}

int main() {
    cin >> M >> D;
    cout <<Md(M, D);
    // Please write your code here.

    return 0;
}