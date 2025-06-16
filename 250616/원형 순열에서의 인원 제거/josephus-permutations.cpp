#include <iostream>
#include <queue>

using namespace std;

int N, K;

int main() {
    queue<int> q;
    cin >> N >> K;

    for(int i = 1; i <= N; i++){
        q.push(i);
    }
    while(q.size() != 1){
        
        for(int i = 1; i < K; i++){
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << " ";
        q.pop();
    }
    cout << q.front();
    // Please write your code here.

    return 0;
}
