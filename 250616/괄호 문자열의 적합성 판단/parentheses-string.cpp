#include <iostream>
#include <string>
#include <stack>

using namespace std;

string str;

int main() {
    stack<char> s;
    cin >> str;

    for(int i = 0; i < str.size(); i++){
        char c = str[i];
        if(c == '('){
            s.push(c);
        }
        else{
            if(s.empty() == 1){
                cout << "No";
                return 0;
            }
            s.pop();
        }
    }
    if(s.empty() == true){
        cout << "Yes";
    }
    else{
        cout <<"No";
    }

    // Please write your code here.

    return 0;
}
