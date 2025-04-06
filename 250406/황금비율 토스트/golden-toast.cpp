#include <iostream>
#include <string>
#include <list>

using namespace std;

int n, m;
string s;

int main() {
    list<char> l;
    cin >> n >> m;
    cin >> s;
    for(int i = 0; i < n; i++){
        l.push_back(s[i]);
    }
    list<char>::iterator it;
    it = l.end();
    for (int i = 0; i < m; i++) {
        char command;
        cin >> command;
        if (command == 'P') {
            char c;
            cin >> c;
            l.insert(it, c);
        }
        if(command == 'L' && it != l.begin()){
            it--;
        }
        if(command == 'R'){
            it++;
        }
        if(command == 'D' && it != l.end() ){
            l.erase(it--);
        }
    }

    // Please write your code here.
    for(it = l.begin(); it != l.end(); it++) { // 'd' 'b' 'c'
        cout << *it;                    // it가 가리키는 주소에 담긴 데이터 참조를 위해 * 사용
    } 
    return 0;
}
