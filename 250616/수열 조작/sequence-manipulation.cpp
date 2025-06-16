#include <iostream>
#include <deque>
using namespace std;

int N;

int main() {
    deque<int> d;
    cin >> N;
    for(int i = 0; i < N; i++){
        d.push_back(i + 1);
    }

    while(d.size() != 1){
        d.pop_front();
        d.push_back(d.front());
        d.pop_front();
    }
    cout << d.front();
    // Please write your code here.

    return 0;
}
